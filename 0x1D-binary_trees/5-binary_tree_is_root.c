#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if given node is a root
 * @node: Pointer to the node to check
 * Return: 1 if node is a root, or 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
