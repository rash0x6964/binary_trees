#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);

	if (parent->right)
	{
		tmp = parent->right;
		parent->right = binary_tree_node(parent, value);
		tmp->parent = parent->right;
		parent->right->right = tmp;
		return (parent->right);
	}

	parent->right = binary_tree_node(parent, value);
	return (parent->right);
}
