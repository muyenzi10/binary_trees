#include "binary_trees.h"

/**
 * binary_tree_nodes - countinng
 * @tree: poining ot o
 * Return: 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t co = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		co = 1;

	co += binary_tree_nodes(tree->left);
	co += binary_tree_nodes(tree->right);

	return (co);
}
