#include "binary_trees.h"

/**
 * binary_tree_insert_left - func to insert a node
 *
 * @parent: node's parent
 * @value: value of the node
 * Return: nod
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		parent->right = node;
		node->parent = parent;
		node->n = value;
		node->right = NULL;
		node->left = NULL;
	}
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
		parent->right = node;
		node->parent = parent;

	}
	return (node);
}
