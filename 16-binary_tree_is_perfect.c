#include "binary_trees.h"

/**
 * compare_depth - comparing buffer
 * @tree: pointing
 * Return: sizing
 */
int compare_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (compare_depth(tree->left) + 1 + compare_depth(tree->right));
}

/**
 * binary_tree_is_perfect - function id
 * @tree: pointing values
 * Return: 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h_l = 0, h_r = 0;

	if (!tree)
		return (0);

	if (tree && (!tree->left && !tree->right))
		return (1);

	h_l = compare_depth(tree->left);
	h_r = compare_depth(tree->right);

	if ((h_l - h_r) == 0)
		return (1);

	return (0);
}
