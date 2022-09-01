#include "binary_trees.h"

/**
 * binary_tree_height - func to find height
 *
 * @tree: binary tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		lh = binary_tree_height(tree->left);
		lh++;
	}
	if (tree->right)
	{
		rh += binary_tree_height(tree->right);
		rh++;
	}

	if (lh >= rh)
		return (lh);
	else
		return (rh);
}
