#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/* Originals link http://stackoverflow.com/a/13755911/5184480 */

/**
 * print_t - Storing reverse
 *
 * @tree: Pointering
 * @offset: Offseting
 * @depth: Dept no
 * @s: Buffer to strore variable
 *
 * Return: length of values
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char b[6];
	int w, lef, rig, is_lef, i;

	if (!tree)
		return (0);
	is_lef = (tree->parent && tree->parent->l == tree);
	w = sprintf(b, "(%03d)", tree->n);
	lef = print_t(tree->l, offset, depth + 1, s);
	rig = print_t(tree->r, offset + lef + w, depth + 1, s);
	for (i = 0; i < w; i++)
		s[depth][offset + lef + i] = b[i];
	if (depth && is_lef)
	{
		for (i = 0; i < w + rig; i++)
			s[depth - 1][offset + lef + w / 2 + i] = '-';
		s[depth - 1][offset + lef + w / 2] = '.';
	}
	else if (depth && !is_lef)
	{
		for (i = 0; i < lef + w; i++)
			s[depth - 1][offset - w / 2 + i] = '-';
		s[depth - 1][offset + lef + w / 2] = '.';
	}
	return (lef + w + rig);
}

/**
 * _height - Measuring number
 *
 * @tree: Pointing num
 *
 * Return: NULL
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t h_l;
	size_t h_r;

	h_l = tree->l ? 1 + _height(tree->l) : 0;
	h_r = tree->r ? 1 + _height(tree->r) : 0;
	return (h_l > h_r ? h_l : h_r);
}

/**
 * binary_tree_print - Print a values
 *
 * @tree: Pointing number
 */
void binary_tree_print(const binary_tree_t *tree)
{
	char **c;
	size_t h, i, x;

	if (!tree)
		return;
	h = _height(tree);
	c = malloc(sizeof(*c) * (h + 1));
	if (!c)
		return;
	for (i = 0; i < h + 1; i++)
	{
		c[i] = malloc(sizeof(**c) * 255);
		if (!c[i])
			return;
		memset(c[i], 32, 255);
	}
	print_t(tree, 0, 0, c);
	for (i = 0; i < h + 1; i++)
	{
		for (x = 254; x > 1; --x)
		{
			if (c[i][x] != ' ')
				break;
			c[i][x] = '\0';
		}
		printf("%s\n", c[i]);
		free(c[i]);
	}
	free(c);
}
