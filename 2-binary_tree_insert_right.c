#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: (binary_tree_t) pointer to the node to insert the right-child in
 * @value: (int) value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *right = NULL;

	if (parent == NULL)
		return (NULL);

	right = parent->right;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (right != NULL)
	{
		new_node->right = right;
		right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
