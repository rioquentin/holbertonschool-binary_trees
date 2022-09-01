#include "binary_trees.h"

/**
 * binary_tree_size - mesure the size
 *
 * @tree: binary tree
 * Return: size of btree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (size);

	if (tree->left)
		size += binary_tree_size(tree->left);
	if (tree->right)
		size += binary_tree_size(tree->right);

	size++;
	return (size);
}
