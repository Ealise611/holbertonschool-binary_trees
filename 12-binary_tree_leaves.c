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
	int n_leave = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (1);
	n_leave += binary_tree_leaves(tree->right);
	n_leave += binary_tree_leaves(tree->left);
	return (n_leave);
}

