#include "binary_trees.h"
/**
 * binary_tree_nodes - func count nodes in a tree with child
 * @tree: pointer ttree to check
 * Return: return 0 if the tree is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t  n_node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		n_node += ((tree->left || tree->right) ? 1 : 0);
		n_node += binary_tree_nodes(tree->left);
		n_node += binary_tree_nodes(tree->right);
		return (n_node);
	}
}
