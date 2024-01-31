#include "binary_trees.h"

/**
 * binary_tree_size - mea dsfhb ksdkksd
 * @tree: pointing fhfds 
 * Return: 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 1;

	if (!tree)
		return (0);

	x += binary_tree_size(tree->left);
	x += binary_tree_size(tree->right);

	return (x);
}
