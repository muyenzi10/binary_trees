#include "binary_trees.h"

/**
 * array_to_bst - building a po
 *
 * @array: pointing val
 * @size: numbers of v
 * Return: 0
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t len;
	bst_t *tr = NULL;

	for (len = 0; len < size; len++)
		bst_insert(&tr, array[len]);

	return (tr);
}
