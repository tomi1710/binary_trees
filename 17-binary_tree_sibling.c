#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node to check
 * Return: returns sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    int a;

    if (node == NULL || node->parent == NULL)
        return (NULL);
    
    a = node->n;
    node = node->parent;
    if (node->left == NULL || node->right == NULL)
        return (NULL);
    if (node->left->n == a)
        return (node->right);
    return (node->left);
}
