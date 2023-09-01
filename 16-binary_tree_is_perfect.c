#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the binary tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	int leftHeight = binary_tree_height(tree->left);
	int rightHeight = binary_tree_height(tree->right);

	if (leftHeight == rightHeight)
	{
		if (!tree->left || !tree->right)
			return (1);

		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}
	return (0);
}
