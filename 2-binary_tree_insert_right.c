#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 *
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!right_child)
	{
		return (NULL);
	}
	right_child->right = parent->right;

	if (right_child->right)
	{
		right_child->right->parent = right_child;
	}
	parent->right = right_child;

	return (right_child);
}
