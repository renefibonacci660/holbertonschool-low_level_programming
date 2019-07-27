#include "binary_trees.h"
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to root node of tree to measure the balance factor
 * Return: balance factor of binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l = tree->left;
	size_t height_r = tree->right;

	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_l - height_r);
}
