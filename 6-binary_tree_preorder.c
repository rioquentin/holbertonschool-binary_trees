#include "binary_trees.h"

/**
 * binary_tree_preorder - func to print in preorder
 * @tree: the binary tree
 * @func: a func
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
