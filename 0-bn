#include "binary_trees.h"

/*
* bbinary_tree_node - creates a binary tree node
* @parent: A pointer to the parent node
* @value: the value to put in a new node
*
* return: if an error occurs - NULL
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
