#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree : pointer to the node
 * Return: numbers of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t Left_leaf;
	size_t Right_leaf;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	Left_leaf = binary_tree_leaves(tree->left);
	Right_leaf = binary_tree_leaves(tree->right);

	return (Left_leaf + Right_leaf);
}
