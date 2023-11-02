#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: NULL  on any failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
		return (NULL);
	}
	return ((node == node->parent->left) ? node->parent->right :
			node->parent->left);
}
