#include "binary_trees.h"

/**
 * A function that check if a node is a leaf
 * @param node: Pointer to the node
 * @return: 1 if node is a leaf, 0 otherwise
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (!node)
        return (0);
    if (!node->left && !node->right)
        return (1);
    return (0);
}
