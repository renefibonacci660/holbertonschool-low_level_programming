#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses binary tree using pre-order traversal
 * @func: Pointer to a function to call for each node
 * @tree: Pointer to the root node of the tree to traverse
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
