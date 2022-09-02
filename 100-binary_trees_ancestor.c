#include "binary_trees.h"

/**
 * binary_trees_ancestor - Function that finds the lowest
 * common ancestor of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 * Return: A pointer to the lowest common ancestor if it's found
 * or NULL if not
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *dad_first, *dad_second;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	dad_first = first->parent;
	dad_second = second->parent;

	if (first == dad_second || !dad_first || (!dad_first->parent && dad_second))
		return (binary_trees_ancestor(first, dad_second));
	if (second == dad_first || !dad_second || (!dad_second->parent && dad_first))
		return (binary_trees_ancestor(second, dad_first));
	return (binary_trees_ancestor(dad_first, dad_second));
}
