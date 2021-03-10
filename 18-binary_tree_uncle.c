#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the sibling of a node
 * @node: node to check
 * Return: returns sibling
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int a;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	a = node->parent->n;
	node = node->parent->parent;
	if (node->left == NULL || node->right == NULL)
		return (NULL);

	if (node->left->n == a)
		return (node->right);
	return (node->left);
}
