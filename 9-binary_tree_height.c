#include "binary_trees.h"
/**
 *binary_tree_height - measure the height of a binary tree
 *@tree: pointer to the root node of tree to measure height
 *
 *Return: height of binary tree, 0 otherwise
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		if (tree->left)
			l = 1 + binary_tree_height(tree->left);
		else
			l = 0;

		if (tree->right)
			r = 1 + binary_tree_height(tree->right);
		else
			r = 0;

		return (BIGGER(l, r));
	}

	return (0);
}
