#include "binary_trees.h"
/**
 * binary_tree_node - creating val
 *
 * @parent: pointing a val
 * @value: values of put
 * Return: ptr
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n = NULL;

	new_n = malloc(sizeof(binary_tree_t));
	if (!new_n)
		return (NULL);

	new_n->parent = parent;
	new_n->n = value;
	new_n->l = NULL;
	new_n->r = NULL;
	return (new_n);
}
