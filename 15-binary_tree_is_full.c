#include "binary_trees.h"
/**
 * binary_tree_is_full - func tree is full or not
 * @tree: pointer tree to check
 * Return: 1 if null 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int nleft = 0, nright = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			nleft = binary_tree_is_full(tree->left);
			nright = binary_tree_is_full(tree->right);
			if (nleft == 0 || nright == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
