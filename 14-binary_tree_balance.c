#include "binary_trees.h"
/**
 * binary_tree_height - func that measure height of a binary tree.
 *@tree: pointer to the root measure the height.
 * Return: 0 if the function null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int r = 1, l = 1;

		if (tree->right)
			r +=  binary_tree_height(tree->right);
		if (tree->left)
			l +=  binary_tree_height(tree->left);
		if (l > r)
			return (l);
		else
			return (r);
	}
	else
		return (0);
}
/**
 * binary_tree_balance - the func  mesure balance factor of a binary tree.
 *@tree: pointer to the balance factor.
 * Return: 0 if the function is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left)
		- binary_tree_height(tree->right));
}
