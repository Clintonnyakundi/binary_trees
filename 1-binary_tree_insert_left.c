#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node as the left child of another node
 *@parent: pointer to node to insert left child in
 *@value: value to store in the new node
 *
 *Return: pointer to created node, NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	if (!parent || !new)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;

	return (new);

}
