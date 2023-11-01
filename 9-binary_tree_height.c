#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a binary tree node is a leaf node
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
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: 0 while tree is NULL	
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (!tree || check_is_tree_leaf(tree))
	{
		return (0);
	}
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left >= right ? (1 + left) : (1 + right));
}
