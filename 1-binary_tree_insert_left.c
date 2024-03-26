#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = binary_tree_node(parent, value);
		tmp->parent = parent->left;
		parent->left->left = tmp;
		return (parent->left);
	}

	parent->left = binary_tree_node(parent, value);
	return (parent->left);
}
