#include "binary_trees.h"

/***
 * A function that goes through a binary tree using pre-order traversal
 * @param tree: Pointer to the root node of the tree
 * @return: Nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree && !func)
        return;
    func(tree->n);
    binary_tree_preorder(tree->left, func);
    binary_tree_preorder(tree->right, func);
}