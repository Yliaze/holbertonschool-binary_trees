#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree : pointer to the node
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Left_Height;
	size_t Right_Height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	Left_Height = binary_tree_height(tree->left);
	Right_Height = binary_tree_height(tree->right);

	if (Left_Height > Right_Height)
		return (Left_Height + 1);
	else
		return (Right_Height + 1);

	return (0);
}
