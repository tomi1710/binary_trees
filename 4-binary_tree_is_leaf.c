#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a given node is a root
 * @node: node to check
 * Return: 1 if is a leaf, 0 is its not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
