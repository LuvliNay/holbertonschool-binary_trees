#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of the node.
 * @node: pointer to the node to find my uncle.
 * Return: pointer (SUCCESS), or NULL (FAILED)
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandad, *luncle, *runcle;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;
	grandad = parent->parent;
	luncle = grandad->left;
	runcle = grandad->right;

	if (parent == grandad->left && runcle == grandad->right)
		return (runcle);
	else if (parent == grandad->right && luncle == grandad->left)
		return (luncle);
	return (NULL);
}
