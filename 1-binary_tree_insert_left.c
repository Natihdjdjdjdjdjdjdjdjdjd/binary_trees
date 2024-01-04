#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that add nod at the left parent
 *@parent: a pointer to the node to the specfic node
 *@value: the value the new node.
 * Return: NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;

	if (parent == NULL)
		return (NULL);
	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);
	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;
	if (parent->left == NULL)
		parent->left = n_node;
	else
	{
		n_node->left = parent->left;
		parent->left = n_node;
		n_node->left->parent = n_node;
	}
	return (n_node);
}
