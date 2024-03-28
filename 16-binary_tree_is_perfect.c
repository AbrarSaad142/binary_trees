#include "binary_trees.h"
/**
 * is_perfect - checks if a binary tree is perfect.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
*/
int is_perfect(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree->left != NULL && tree->right != NULL)
	{
		left = 1 + is_perfect(tree->left);
		right = 1 + is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
