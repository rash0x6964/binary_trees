#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: Number
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_size, right_size;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (1 + left_size + right_size);
}
