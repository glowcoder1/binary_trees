#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a given node is a a leaf
 * @node: pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 * If node is NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && (node->left == NULL && node->right == NULL))
		return (1);
	return (0);
}
