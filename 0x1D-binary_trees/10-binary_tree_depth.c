#include "binary_trees.h"
/**
 * binary_tree_depth - Measures depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: Depth of node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (depth);

	for (; tree->parent; depth++)
		tree = tree->parent;

	return (depth);
}
