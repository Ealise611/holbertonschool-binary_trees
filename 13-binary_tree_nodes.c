#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in
 * a binary tree.
 * @tree: A pointer to the root node of the tree to
 * count the nodes with children.
 *
 * Return: The number of nodes in the binary tree that have at least one child.
 * If tree is NULL, returns 0.
 *
 * Description: This function traverses the binary tree and counts the nodes
 * that have at least one child (i.e., either left or right child is not
 * NULL). It does this recursively, visiting each node and checking
 * if it has any children.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int size_c = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		size_c++;

	size_c += binary_tree_nodes(tree->right);
	size_c += binary_tree_nodes(tree->left);

	return (size_c);
}
