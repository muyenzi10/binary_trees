#include "binary_trees.h"

/**
 * binary_tree_leaves - counting fhhd jsdfb
 *
 * @tree: return 0
 * Return: 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t coun = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	coun += binary_tree_leaves(tree->left);
	coun += binary_tree_leaves(tree->right);

	return (coun);
}
