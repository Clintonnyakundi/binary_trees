#include "binary_trees.h"
/**
  * _binary_tree_height - helper function for binary_tree_height
  * @tree: input tree
  *
  * Return: height of tree
  */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t a, b;

	if (!tree)
		return (0);

	a = _binary_tree_height(tree->left);
	b = _binary_tree_height(tree->right);
	return (BIGGER(a, b) + 1);
}

/**
  * binary_tree_height - measures height of a binary tree
  * @tree: input tree
  *
  * Return: height of tree.
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_height(tree) - 1);
}

/**
 *binary_tree_size - measures number of elements present in the tree
 *@tree: pointer of root node of tree to measure the size
 *
 *Return: size of the tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left) + 1
				+ binary_tree_size(tree->right));
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
	int i, j;

	if (!tree)
		return (0);

	i = binary_tree_height(tree);
	j = (int) binary_tree_size(tree);

	return (j == (2 << i) - 1);
}
