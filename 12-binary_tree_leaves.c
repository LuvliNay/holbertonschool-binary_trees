#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count
 * the number of leaves.
 * Return: count of the leaves in the binary tree (SUCCESS)
 * or 0 (FAILED)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
		return (0);

	left_leaves = binary_tree_leaves((*tree).left);
	right_leaves = binary_tree_leaves((*tree).right);

	if (((*tree).left == NULL && (*tree).right == NULL))
		return (left_leaves + right_leaves + 1);
	return (left_leaves + right_leaves);
}
