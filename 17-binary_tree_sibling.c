#include "binary_trees.h"

/**
 * binary_tree_sibling -  the func thatfinds the sibling of a node.
 *@node: pointer to  sibling.
 * Return: To the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);
}
