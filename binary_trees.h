#ifndef B_T_H
#define B_T_H

#include <limits.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * struct binary_tree_s - Binay 
 *
 * @n:storing a data
 * @parent: Pointing
 * @l: Poin
 * @r: Pointer avalues
 */
struct binary_tree_s
{
	int n;
	
	struct binary_tree_s *l;
    struct binary_tree_s *parent;
	struct binary_tree_s *r;
};

typedef struct binary_tree_s binary_tree_t;
/* ----abc------ */
typedef struct binary_tree_s bst_t;

/* ----a------ */
typedef struct binary_tree_s avl_t;

/* M----- */
typedef struct binary_tree_s heap_t;

/* ------- */
void binary_tree_print(const binary_tree_t *);
/* pr */
bst_t *bst_search(const bst_t *tree, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
heap_t *array_to_heap(int *array, size_t size);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second);
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_insert(bst_t **tree, int value);
bst_t *array_to_bst(int *array, size_t size);
bst_t *bst_remove(bst_t *root, int value);
int binary_tree_is_avl(const binary_tree_t *tree);
avl_t *avl_remove(avl_t *root, int value);
avl_t *avl_insert(avl_t **tree, int value);
size_t binary_tree_size(const binary_tree_t *tree);
avl_t *array_to_avl(int *array, size_t size);
int heap_extract(heap_t **root);
avl_t *sorted_array_to_avl(int *array, size_t size);
int *heap_to_sorted_array(heap_t *heap, size_t *size);
int binary_tree_is_heap(const binary_tree_t *tree);
heap_t *heap_insert(heap_t **root, int value);

#endif
