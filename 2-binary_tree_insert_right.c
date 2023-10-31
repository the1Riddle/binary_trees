#include "2-binary_tree_insert_right.c"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (parent == NULL)
        return NULL;

    new = malloc(sizeof(binary_tree_t));
    if(new == NULL)
        return NULL;

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = parent->right;
    parent->right = new;
    if (new->left)
        new->left-parent = new;
    return new;
}
