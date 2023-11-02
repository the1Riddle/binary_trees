#include "binary_trees.h"
/**
 * check_is_tree_leaf - check if a binary tree node is a leaf node
 * @node: pointer to the binary tree node to be checked.
 *
 * Return: 1 if the node is a leaf or 0 if not
 */
int check_is_tree_leaf(const binary_tree_t *node)
{
	if (node != NULL && !node->left && !node->right)
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_nodes - counst the nodes with at least one child
 * in the binary tree
 *
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 when tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || check_is_tree_leaf(tree))
	{
		return (0);
	}
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (1 + left + right);
}
