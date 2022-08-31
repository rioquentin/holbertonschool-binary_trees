#include "binary_trees.h"

/**
 * 9-binary_tree_height - func to find height
 *
 * @tree: binary tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	else
	{
		lh += binary_tree_height(tree->left);
		rh += binary_tree_height(tree->right);
		if (lh >= rh)
			return (lh + 1);
		else
			return (rh + 1);
	}
}
