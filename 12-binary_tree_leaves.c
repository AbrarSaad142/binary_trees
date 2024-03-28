#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, leaf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_leaves(tree->left);
		right = binary_tree_leaves(tree->right);
		leaf = left + right;
		return ((!left && !right) ? leaf + 1 : leaf + 0);
	}
}
