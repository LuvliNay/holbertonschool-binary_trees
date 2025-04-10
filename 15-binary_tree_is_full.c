#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 if tree is (NULL).
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if ((left == 1 && right == 1) || (left == 0 && right == 0))
		return (1);
	{
		if (left < right)
			return (left);
		if (right > left)
			return (right);
	}
	return (0);
}
