#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent of new_node
 * @value: value for new_node
 * Return: returns pointer to new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	if (parent->left == NULL)
	{
		new_node->parent = parent;
		parent->left = new_node;
		new_node->n = value;
	}
	else
	{
		new_node->left = parent->left;
		new_node->n = value;
		new_node->parent = parent;
		parent->left = new_node;
		parent->left->left->parent = new_node;
		new_node->right = NULL;
	}

	return (new_node);
}
