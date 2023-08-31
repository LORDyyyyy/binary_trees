#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node to measure the balance factor.
 *
 * Return: The balance factor of the tree.
 *
 * If tree is NULL, the function returns 0.
 * A NULL pointer is not a node.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 1, right_height = 1;

	if (tree == NULL)
	{
		return (0);
	}

	left_height += binary_tree_height(tree->left);
	right_height += binary_tree_height(tree->right);

	return (left_height - right_height);

}
