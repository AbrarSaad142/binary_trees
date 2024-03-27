#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			left = binary_tree_size(tree->left);
			right = binary_tree_size(tree->right);
			size = left + right + 1;
		}
	return (size);
	}
}
