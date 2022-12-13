#include "binary_trees.h"
/**
 *binary_tree_depth - measures depth of a node in a binary tree
 *@tree: pointer to the node to measure the depth
 *
 *Return: depth of node, 0 if tree is NULL
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		i++;
		tree = tree->parent;
	}

	return (i);
}
