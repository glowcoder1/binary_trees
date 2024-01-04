#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: (binary_tree_t) pointer to the node to insert the left-child in
 * @value: (int) value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure or
 * if parent is NULL
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *left;

	if (parent == NULL)
		return (NULL);
	left = parent->left;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (left != NULL)
	{
		new_node->left = left;
		left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
