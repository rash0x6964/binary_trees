#include "binary_trees.h"

/**
 * get_sibling -  finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: a pointer to the sibling node
 */

binary_tree_t *get_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (get_sibling(node->parent));
}
