#include "binary_trees.h"

/**
 * binary_tree_depth - find depth
 *
 * @tree: binary tree
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (depth);

	depth += binary_tree_depth(tree->parent);
	depth++;
	return (depth);
}
