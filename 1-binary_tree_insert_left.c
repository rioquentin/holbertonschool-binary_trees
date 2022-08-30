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

	node = binary_tree_node(parent, value);

	if (node == NULL)
		return (NULL);
	if (parent == NULL)
		return (node);

	if (parent->left == NULL)
	{
		parent->left = node;
		node->parent = parent;
		node->n = value;
		node->left = NULL;
		node->right = NULL;
	}
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
		parent->left = node;
		node->parent = parent;

	}
	return (node);
}
