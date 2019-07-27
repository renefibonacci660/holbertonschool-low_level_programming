#include "binary_trees.h"
/**
 * binary_tree_insert_right -inserts a node as the right-child of parent node
 * @parent: Pointer to the parent node
 * @value: Value of node to insert
 * Return: Pointer to the newly added node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	if (!parent->right)
		parent->right = new_node;
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	return (new_node);
}
