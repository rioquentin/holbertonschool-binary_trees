#include "binaray_trees.h"

/**
 * binary_tree_leaves - func to count leaves
 *
 * @tree: binary tree
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int nleaves;

	if (tree == NULL)
		return (0);

	if (tree->left)
		nleaves += binary_tree_leaves(tree->left);
	if (tree->right)
		nleaves += binary_tree_leaves(tree->right);

	if (tree->left && tree->right)
		return (NULL);
	nleaves++;
	return (nleaves);
}
