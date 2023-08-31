#include "binary_trees.h"

/**
 * A function that create a binary tree node
 * @parent: Pointer to the parent node
 * @n: The value of the node
 * @return: Pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (!node)
        return (NULL);
    node->n = value;
    node->parent = parent;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
