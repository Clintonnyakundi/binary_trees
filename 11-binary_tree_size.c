#include "binary_trees.h"
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
