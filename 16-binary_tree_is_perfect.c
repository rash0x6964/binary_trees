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
 * calc_hight - get the hight of a tree
 * @tree: pointer to the tree
 * Return: Number
 */

size_t calc_hight(binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = calc_hight(tree->left);
	right_height = calc_hight(tree->right);
	return (1 + max(left_height, right_height));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (
		binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right) &&
		calc_hight(tree->left) == calc_hight(tree->right)
	);
}
