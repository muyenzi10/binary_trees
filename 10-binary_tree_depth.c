#include "binary_trees.h"

/**
 * binary_tree_depth - mea skdb kdbsb
 *
 * @tree: pointing
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		d = 1 + binary_tree_depth(tree->parent);
	return (d);
}
