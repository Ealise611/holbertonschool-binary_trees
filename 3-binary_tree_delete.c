#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - a function that deletes an entire binary tree
 *
 * @tree: is a pointer to the root node of the tree to delete
 * Description: This function recursively deletes all nodes in a binary tree,
 * starting from the root. If the tree is NULL, the function does nothing.
 *
 * Return: None
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
