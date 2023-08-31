#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 * Return: Nothing
*/

void binary_tree_delete(binary_tree_t *tree)
{
    binary_tree_t *current = tree;
    binary_tree_t *temp = NULL;

    while (current != NULL)
    {
        if (current->left != NULL)
        {
            temp = current->left;
            current->left = temp->right;
            temp->right = current;
            current = temp;
        }
        else
        {
            temp = current->right;
            free(current);
            current = temp;
        }
    }
}
