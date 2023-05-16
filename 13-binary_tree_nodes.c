#include "binary_trees.h"

/*
 * binary_tree_size - Measures the size of a binary tree
 * @tree : pointer to the root node of the tree
 * Return: Size of the binary tree,
 */
size_t binary_tree_nodes(const binary_tree_t *tree) 
{
    if (tree == NULL) 
    {
        return (0);
    }

    size_t count = 0;

    if (tree->left != NULL || tree->right != NULL)
    {
        count++;
    }

    count += binary_tree_nodes(tree->left);
    count += binary_tree_nodes(tree->right);

    return (count);
}
