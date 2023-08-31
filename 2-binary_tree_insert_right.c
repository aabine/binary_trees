#include "binary_trees.h"

/**
 * Inserts a node as the right-child of another node
 * @param parent: Pointer to the parent node
 * @param value: The value of the node
 * @return: Pointer to the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    if (!parent)
        return (NULL);

    binary_tree_t *node = binary_tree_node(parent, value);
    if (!node)
        return (NULL);
    
    if (parent->right)
    {
        node->right = parent->right;
        parent->right->parent = node;
    }
    parent->right = node;
    return (node);
}
