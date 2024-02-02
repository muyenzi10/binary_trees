#include "binary_trees.h"

/**
 * bst_insert - inserting values
 *
 * @tree: doub p
 * @value: values
 * Return: 0
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *ne, *tr;

	if (tree == NULL || *tree == NULL)
	{
		ne = binary_tree_node(NULL, value);
		*tree = ne;
		return (ne);
	}

	tr = *tree;

	while (tr != NULL)
	{
		if (tr->n == value)
			return (NULL);
		if (tr->n > value)
		{
			if (tr->left == NULL)
			{
				tr->left = binary_tree_node(tr, value);
				return (tr->left);
			}
			tr = tr->left;
		}
		if (tr->n < value)
		{
			if (tr->right == NULL)
			{
				tr->right = binary_tree_node(tr, value);
				return (tr->right);
			}
			tr = tr->right;
		}
	}
	return (NULL);
}
