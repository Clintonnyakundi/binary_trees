#include "binary_trees.h"
/**
 *binary_tree_insert_right -inserts a node as ther right child of another node
 *@parent: pointer to node to insert right child in
 *@value: value to store in new node
 *
 * Return: pointer to created node or NULL on failure or parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);

}
