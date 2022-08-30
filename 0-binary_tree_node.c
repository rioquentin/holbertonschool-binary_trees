#include "binary_trees.h"

/**
 * binary_tree_node - func to create a binary tree
 *
 * @parent: parent of the node we want to create
 * @value: value of the node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	
	if (node == NULL);
		return (NULL);

	if (parent == NULL)
	{
		node->parent = parent;
		node->left = NULL;
		node->right = NULL;
		node->n = value;
		return (node);
	}
	node->parent = parent;
	node->left = NULL;
	node->right =NULL;
	node->n = value;
	return (node);
}
