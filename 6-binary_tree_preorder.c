#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node.
 * The node's value is passed as an argument.
 *
 * Description: traverses a binary tree in pre-order, meaning it processes the
 * current node first, then recursively traverses the left subtree,
 * followed by the right subtree.
 * The value of each node is passed to
 * the provided function `func` for processing.
 * If either the tree or the function is NULL, the function does nothing.
 *
 * Return: None
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
