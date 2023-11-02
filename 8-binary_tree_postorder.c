#include "binary_trees.h"
/**
* binary_tree_postorder - a function that uses post order traversal
* @tree: pointer to the root node of the binary tree
* @func: function that prints values in a node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
