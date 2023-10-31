#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: the node to be checked
 *
 * Return: 1 or 0 on failure or when node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* A HACKER BLOCK OF CODE 😂🎲🎲 */
	return ((!node || node->parent) ? 0 : 1);
}
