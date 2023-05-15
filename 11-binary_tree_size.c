#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree : pointer to the root node of the tree
 * Return: Size of the binary tree,
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t Left_Height;
	size_t Right_Height;

	if (tree == NULL)
		return (0);

	Left_Height = binary_tree_size(tree->left);
	Right_Height = binary_tree_size(tree->right);

	return (Left_Height + Right_Height + 1);
}
