#include "binary_trees.h"

/**
 * binary_tree_leaves - func to count leaves
 *
 * @tree: binary tree
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nleaves = 0;

	if (tree == NULL)
		return (0);
	nleaves = binary_tree_leaves(tree->left);
	nleaves = binary_tree_leaves(tree->right);
	if (tree->left && tree->right)
		return (NULL);
	return (nleaves + 1);
}
