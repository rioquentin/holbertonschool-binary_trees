#include "binary_trees.h"

/**
 * binary_tree_nodes - func to count nodes with shield
 *
 * @tree: binary tree
 * Return: number of nodes with child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int num;

	if (tree == NULL)
		return (0);
	if (tree->left)
		num = binary_tree_nodes(tree->left);
	if (tree->right)
		num = binary_tree_nodes(tree->right);

	if (!tree->left && !tree->right)
		return (num);
	return (num + 1);
}
