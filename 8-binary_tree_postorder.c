#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using postorder traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node.
 * The node's value is passed as an argument.
 *
 * Description: traverses a binary tree in posorder, meaning it processes the
 * left subtree first, then recursively traverses the right subtree,
 * then visit the current node.
 * The value of each node is passed to
 * the provided function `func` for processing.
 * If either the tree or the function is NULL, the function does nothing.
 *
 * Return: None
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
