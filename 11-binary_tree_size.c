#include "binary_trees.h"

/**
 * binary_tree_size - func that measure the size of a binary tree.
 *@tree: pointer to the root node of the tree to measure the size.
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t nw_left, nw_right;

		nw_left = binary_tree_size(tree->left);
		nw_right = binary_tree_size(tree->right);
		return (1 + nw_right + nw_left);
	}
}
