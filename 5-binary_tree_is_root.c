#include "binary_trees.h"

/**
 * binary_tree_is_root - binary_tree_is_root
 * @node: is a pointer to the node to check
 * Return: 1 if node is a root, otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
