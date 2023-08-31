#include "binary_trees.h"

/**
 * Insert a node as the left-child of another node
 * @param parent: Pointer to the parent node
 * @param value: The value of the node
 * @return: Pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (!parent)
        return NULL;

    binary_tree_t *node = binary_tree_node(parent, value);
    if (!node)
        return NULL;

    if (parent->left)
    {
        node->left = parent->left;
        parent->left->parent = node;
    }

    parent->left = node;
    return (node);
}
