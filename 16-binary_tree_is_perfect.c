#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * it has to be the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none
 * @tree: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int n_left = 0, n_right = 0;

	if (tree->left && tree->right)
	{
		n_left = 1 + tree_is_perfect(tree->left);
		n_right = 1 + tree_is_perfect(tree->right);
		if (n_right == n_left && n_right != 0 && n_left != 0)
			return (n_right);
		return (0);
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
/**
 * binary_tree_is_perfect -the func measure  perfect or not a tree
 * @tree: pointer point tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int value = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		value = tree_is_perfect(tree);
		if (value != 0)
		{
			return (1);
		}
		return (0);
	}
}

