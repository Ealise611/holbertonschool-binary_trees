#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 *
 * Return: The number of leaves in the binary tree.
 *         If tree is NULL, returns 0.
 *
 * Description: This function traverses the binary tree and counts the nodes
 *              that are leaves. A leaf is a node that has no children (i.e.,
 *              both left and right pointers are NULL). If the tree is NULL,
 *              the function returns 0, as there are no leaves to count.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		if (tree->right == NULL && tree->left == NULL)
		return (1);
		else if (tree->right != NULL && tree->left == NULL)
		return (1);
		else if (tree->right == NULL && tree->left != NULL)
		return (1);
		else
			return (2);
	}
	return (0);
}

