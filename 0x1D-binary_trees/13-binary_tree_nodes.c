#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with at least one child
 * @tree: The node representing the root of the tree
 * Return: Number of nodes with child (parents)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (1);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right);
}
