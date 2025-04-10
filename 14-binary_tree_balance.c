#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the tree.
 * @tree: pointer to the root node of the tree to measure
 * the height.
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height((*tree).left);
	right_height = binary_tree_height((*tree).right);

	if (right_height > left_height)
		return (right_height + 1);
	return (left_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of
 * the tree.
 * @tree: pointer to the root node of the tree to measure
 * the balance factor.
 * Return: balance factor (SUCCESS), or 0 if (NULL).
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_balance = 0, right_balance = 0;

	if (tree == NULL)
		return (0);

	left_balance = binary_tree_height(tree->left);
	right_balance = binary_tree_height(tree->right);

	return (left_balance - right_balance);
}
