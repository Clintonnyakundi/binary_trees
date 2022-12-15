#include "binary_trees.h"
/**
 *binary_tree_sibling - Finds the sibling of a node
 *@node: pointer to the node to find the sibling
 *
 *Return: pointer to sibling node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (node->parent->right == node
			? node->parent->left : node->parent->right);
}

/**
 *binary_tree_uncle - finds the uncle of a node
 *@node: pointer to node to find the uncle
 *
 *Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
