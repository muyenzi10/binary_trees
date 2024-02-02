#include "binary_trees.h"

/**
 * binary_tree_height_aux -  a trea
 * @tree: Pointing
 * Return: 0
 */
size_t	binary_tree_height_aux(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (!tree)
		return (0);
	if (tree->left)
		hl = 1 + binary_tree_height_aux(tree->left);
	if (tree->right)
		hr = 1 + binary_tree_height_aux(tree->right);

	if (hl > hr)
		return (hl);
	return (hr);
}

/**
 * print_level_order - printing values
 * @tree: pointing to values
 * @level: levels of values
 * @func: pointing data
 * Return: voiding values
 */
void print_level_order(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level_order(tree->left, level - 1, func);
		print_level_order(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - funct
 * @tree: pointing
 * @func: pointing values
 * Return: 0
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = 0;
	int l = 1;

	if (!tree || !func)
		return;

	h = binary_tree_height_aux(tree) + 1;

	while (l <= h)
	{
		print_level_order(tree, l, func);
		l++;
	}
}
