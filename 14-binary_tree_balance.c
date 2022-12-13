#include "binary_trees.h"
/**
 *tree_height - measures binary tree height
 *@tree: pointer to root node of binary tree to be measured
 *
 *Return: height of binary tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? tree_height(tree->left) + 1 : 1;
		r = tree->right ? tree_height(tree->right) + 1 : 1;

		return (BIGGER(l, r));
	}
	return (0);
}

/**
 *binary_tree_balance - measures balance factor of a binary tree
 *@tree: pointer to the root node of tree to measure balance factor
 *
 *Return: balance factor or 0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
