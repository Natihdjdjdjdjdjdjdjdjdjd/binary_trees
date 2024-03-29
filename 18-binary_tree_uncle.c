#include "binary_trees.h"

/**
 * binary_tree_uncle - the func finds the sibling of a node.
 *binary_tree_t - the func of sibling uncle
 *@node: pointer to find the sibling.
 * Return: pointer to sibling.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
