#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);


	l_height = tree->left ? 1 + binary_tree_height(tree->left) : l_height;
	r_height = tree->right ? 1 + binary_tree_height(tree->right) : r_height;

	return ((l_height > r_height) ? l_height : r_height);
}
