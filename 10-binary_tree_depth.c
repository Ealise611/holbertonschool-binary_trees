#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>


/**
 * binary_tree_depth - Measures the depth of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the depth of
 *
 * Description: This function measures the depth of a binary tree.
 * The depth of a binary tree is the number of edges from the root node
 * to a leaf/or given node. If the tree is NULL, the function returns 0
 * indicating that the tree has no depth.
 *
 * Return: The depth of the tree, or 0 if the tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
