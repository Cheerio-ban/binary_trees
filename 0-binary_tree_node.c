#include "binary_trees.j"

/**
 * binary_tree_node - The function creates a binary tree node
 * @parent: Parent of the node created
 * @value: Value of the node created
 * Description: 0, New node
 *
 * Return: 1. upon success, returns pointer to new node
 * 2. upon failure, returns NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node =  malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->value = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
