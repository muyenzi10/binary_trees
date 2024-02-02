#include "binary_trees.h"

/**
 * isBST - Compares val
 * @tree: pointing val
 * @min: mi v
 * @max: ma values of
 *
 * Return: 1
 */
int isBST(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (
		isBST(tree->left, min, tree->n - 1) &&
		isBST(tree->right, tree->n + 1, max)
	);
}

/**
 * binary_tree_is_bst - checking
 * @tree: pointing
 * Return: 1
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (isBST(tree, INT_MIN, INT_MAX));
}
