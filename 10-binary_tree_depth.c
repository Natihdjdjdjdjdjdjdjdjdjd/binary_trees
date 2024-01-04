#include "binary_trees.h"

/**
 * binary_tree_depth - the func measures the depth of a node from root
 *@tree: pointer to the node to check the depth.
 * Return: return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
