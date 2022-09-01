#include "binary_trees.h"

/**
 * binary_tree_sibling - func to get node's siblings
 *
 * @node: node of a btree
 * Return: siblings
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
