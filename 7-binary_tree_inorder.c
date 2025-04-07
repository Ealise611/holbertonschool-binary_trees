#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using inorder traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node.
 * The node's value is passed as an argument.
 *
 * Description: traverses a binary tree in inorder, meaning it processes the
 * current node left subtree recursively first, then visit the current node,
 * followed by the right subtree.
 * The value of each node is passed to
 * the provided function `func` for processing.
 * If either the tree or the function is NULL, the function does nothing.
 *
 * Return: None
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
