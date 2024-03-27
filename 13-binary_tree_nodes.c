#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least
 * 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to count
 * the number of nodes
 * Return: Number
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_node, right_node;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left_node = binary_tree_nodes(tree->left);
	right_node = binary_tree_nodes(tree->right);

	return (1 + left_node + right_node);
}
