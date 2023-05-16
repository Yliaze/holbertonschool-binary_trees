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

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree : pointer to the root node of the tree
 * Return: 1 if tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int height = binary_tree_height(tree);
	int expected_nodes = (1 << (height + 1)) - 1;
	int actual_nodes = binary_tree_size(tree);

	if (actual_nodes == expected_nodes)
		return (1);

	return (0);
}
