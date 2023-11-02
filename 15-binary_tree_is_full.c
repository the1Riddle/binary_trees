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
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: a function that checks if a binary tree is full
 *
 * Return: 0 while tree is NULL or 1 if tree is a leaf
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
	{
		return (0);
	}
	if (check_is_tree_leaf(tree))
	{
		return (1);
	}
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return ((left == 0 || right == 0) ? 0 : 1);
}
