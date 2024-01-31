#include "binary_trees.h"

/**
 * binary_tree_height_balance - measuring
 * @tree: pointing
 * Return: 0
 */

size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t h_l = 0, h_r = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_l = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		h_r = 1 + binary_tree_height_balance(tree->right);

	if (h_l > h_r)
		return (h_l);
	return (h_r);
}

/**
 * binary_tree_balance - measuring
 * @tree: pointung
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_l = 0, h_r = 0;

	if (!tree)
		return (0);
	if (tree->left)
		h_l = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		h_r = 1 + binary_tree_height_balance(tree->right);
	return (h_l - h_r);
}
