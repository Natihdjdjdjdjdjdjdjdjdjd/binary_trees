#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, nw_left = 0, nw_right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nw_left = binary_tree_leaves(tree->left);
		nw_right = binary_tree_leaves(tree->right);
		leaf = nw_left + nw_right;
		return ((!nw_left && !nw_right) ? leaf + 1 : leaf + 0);
	}
}
