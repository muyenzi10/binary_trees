#include "binary_trees.h"

/**
 * binary_tree_sibling - finds subl
 * @node: pointing
 * Return: pointing
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	if (node == parent->left)
		return (parent->right);

	return (parent->left);
}
