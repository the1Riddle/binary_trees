#include "binary_trees.h"
/**
 * check_is_tree_leaf - check if a binary tree node is a leaf node
 * @node: pointer to the binary tree node to be checked.
 *
 * Return: 1 if the node is a leaf or 0 if not
 */
/*int check_is_tree_leaf(const binary_tree_t *node)
{
        if (node != NULL && !node->left && !node->right)
        {
                return (1);
        }
        return (0);
}
*/
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: A pointer to the parent node
 * @value: the value to put in a new node
 *
 * Return: if an error occurs - NULL
 *         else a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
