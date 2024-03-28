#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node:  is a pointer to the node to find the uncle.
 * Return: If node is NULL or the parent is NULL, return NULL
 *  If node has no uncle, return NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
