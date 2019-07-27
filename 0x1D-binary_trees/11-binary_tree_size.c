#include "binary_trees.h"
/**
 * binary_tree_size - Calculates the size of a binary tree
 * @tree: Node representing the root of the tree
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	left += binary_tree_size(tree->left);
	right += binary_tree_size(tree->right);
	return (left + right + 1);
}
