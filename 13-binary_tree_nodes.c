#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child.
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: Number of nodes in the tree.
 *
 * If tree is NULL, the function returns 0.
 * A NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree->parent)
	{
		nodes += 1;
	}

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}

	nodes += binary_tree_leaves(tree->left);
	nodes += binary_tree_leaves(tree->right);

	return (nodes);
}
