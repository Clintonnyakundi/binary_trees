#include "binary_trees.h"
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

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to root node of tree to check
 *
 *Return: 0 if tree in null or not perfect, 1 if perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (binary_tree_is_perfect(tree->left) == 0
		|| binary_tree_is_perfect(tree->right) == 0)
		return (0);

	return (1);
}
