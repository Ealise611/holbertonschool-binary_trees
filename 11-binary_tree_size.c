#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The number of nodes in the binary tree.
 *         If tree is NULL, returns 0.
 *
 * Description: This function traverses the binary tree to count the total number
 *              of nodes. It recursively counts the nodes in the left and right
 *              subtrees and adds them to 1 for the current node.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_l = 0;
	int size_r = 0;

	if (tree == NULL)
		return (0);
	size_l = binary_tree_size(tree->left);
	size_r = binary_tree_size(tree->right);
	return (size_l + size_r + 1);
}

