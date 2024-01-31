#include "binary_trees.h"

/**
 * binary_tree_height - medsfksd ksdsdkb kfbbks
 *
 * @tree: pointer sffd sdfd
 * Return: 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h = 0, hr = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hr = 1 + binary_tree_height(tree->right);

	if (h > hr)
		return (h);
	return (hr);
}
