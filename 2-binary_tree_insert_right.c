#include "2-binary_tree_insert_right.c"
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
	binary_tree_t *right_child;

	if (!parent)
	{
		return (NULL);
	}
	right_child = binary_tree_node(parent, value);

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
