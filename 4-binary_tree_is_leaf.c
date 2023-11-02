#include "binary_trees.h"
/**
 * check_is_tree_leaf - check if a binary tree node is a leaf node
 * @node: pointer to the binary tree node to be checked.
 *
 * Return: 1 if the node is a leaf or 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && !node->left && !node->right)
	{
		return (1);
	}
	return (0);
}
