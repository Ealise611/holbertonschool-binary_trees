#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int is_perfect_recur(const binary_tree_t *tree, int d);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, returns 0.
 *
 * Description: A binary tree is considered perfect if all leaf nodes are at
 *              the same level, and every parent node has exactly two children.
 *              This function recursively checks that the tree satisfies these
 *              conditions. If the tree is NULL, it returns 0, if perfect 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);
	d = binary_tree_height(tree);
	return (is_perfect_recur(tree, d));

}

/**
 * is_perfect_recur - recursively checking
 * @tree: pointer to the root node
 * @d:height of the node
 *
 * Decription: recursively checking
 * Return: depth of node
 */

int is_perfect_recur(const binary_tree_t *tree, int d)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (d == 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recur(tree->left, d - 1)
		&& is_perfect_recur(tree->right, d - 1));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Description: get height
 * Return: The height of the tree. If tree is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
