#include "binary_trees.h"

/**
 * max - get the largest number
 * @a: first number
 * @b: second number
 * Return: the largest number
 */

size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Int
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int max_left_nb = 0;
	int max_right_nb = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	max_left_nb = binary_tree_height(tree->left);
	max_right_nb = binary_tree_height(tree->right);
	return (1 + max(max_left_nb, max_right_nb));
}
