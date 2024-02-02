#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  rota
 * @tree: Poin
 * Return: Poi
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *c, *p = tree;

	if (!tree)
		return (NULL);

	c = p->left;
	if (!c)
		return (tree);

	if (c->right)
		c->right->parent = p;

	p->left = c->right;
	c->right = p;
	c->parent = p->parent;
	p->parent = c;

	if (c->parent && c->parent->left == p)
		c->parent->left = c;
	else if (c->parent)
		c->parent->right = c;

	return (c);
}
