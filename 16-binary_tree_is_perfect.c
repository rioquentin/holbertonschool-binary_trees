#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks
 * if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 if tree is full and 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}

/**
 * binary_tree_balance - func to get balance factor
 *
 * @tree: btree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh = 0, rh = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		lh = binary_tree_height(tree->left);
		lh++;
	}
	if (tree->right)
	{
		rh = binary_tree_height(tree->right);
		rh++;
	}

	return (lh - rh);
}

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

/**
 * binary_tree_is_perfect - Function that checks if
 * a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: 1 if tree is perfect and 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_balance(tree) == 0 &&
		binary_tree_is_full(tree) == 1)
		return (1);
	return (0);
}
