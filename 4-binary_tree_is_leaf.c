#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function checks for leaf
 * @node: pointer to node to check
 * Description: 4. Is leaf
 * Return: see below
 * 1. if leaf, return 1
 * 2. if not leaf or NULL, return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);

	return (0);
}
