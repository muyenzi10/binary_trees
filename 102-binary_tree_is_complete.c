#include "binary_trees.h"

/**
 * count_nodes - Counting values
 * @root:  node values
 *
 * Return: Num
 */

int count_nodes(binary_tree_t *root)
{
	if (!root)
		return (0);

	return (1 + count_nodes(root->left) + count_nodes(root->right));
}


/**
 * is_complete - Checking
 * @root: Pointing
 * @index: Indx
 * @n: numb
 * Return: 1
 */

int is_complete(binary_tree_t *root, int index, int n)
{
	if (!root)
		return (0);

	if (index >= n)
		return (0);
	if (!root->left && !root->right)
		return (1);
	if (root->right && !root->left)
		return (0);
	if (root->left && !root->right)
		return (is_complete(root->left, index * 2 + 1, n));

	return (is_complete(root->left, index * 2 + 1, n) &&
		is_complete(root->right, index * 2 + 2, n));
}

/**
 * binary_tree_is_complete - checking values
 * @tree: Pointing
 * Return: 1
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nox;
	binary_tree_t *r;

	if (!tree)
		return (0);

	r = (binary_tree_t *)tree;
	nox = count_nodes(r);

	return (is_complete(r, 0, nox));
}
