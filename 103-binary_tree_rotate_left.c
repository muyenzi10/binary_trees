#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  lef fun
 * @tree: Pointing rs
 *
 * Return: Pointing v
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *c, *p = tree;

	if (!tree)
		return (NULL);

	c = p->right;
	if (!c)
		return (tree);

	if (c->left)
		c->left->parent = p;

	p->right = c->left;
	c->left = p;
	c->parent = p->parent;
	p->parent = c;

	if (c->parent && c->parent->left == p)
		c->parent->left = c;
	else if (c->parent)
		c->parent->right = c;

	return (c);
}
