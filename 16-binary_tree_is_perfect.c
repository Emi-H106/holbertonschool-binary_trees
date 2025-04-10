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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);


	if (tree->left == NULL || tree->right == NULL)
		return (0);


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);


	if (left_height != right_height)
		return (0);


	return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
}
