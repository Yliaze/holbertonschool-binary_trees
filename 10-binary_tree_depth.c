#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree : pointer to the node
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t Depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	Depth = binary_tree_depth(tree->parent);
	return (Depth + 1);
}
