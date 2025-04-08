#include "binary_trees.h"

/**
 * binary_tree_height - that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 is NULL or 1 + height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
	{
		return (1 + left_height);
	}
	else
		return (1 + right_height);
}

/**
 * binary_tree_balance - measures the balance factor
 *                       of a binary tree
 * @tree: a pointer to the root node of the tree
 *        to measure the balance factor
 * Return: If tree is NULL, return 0 or left-right difference
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
