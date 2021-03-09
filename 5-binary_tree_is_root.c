#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: node to check
 * Return: returns 1 if node is root, or 0 if its not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
