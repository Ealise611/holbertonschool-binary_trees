#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);


/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree
 * to measure the balance factor.
 *
 * Return: The balance factor of the tree.
 *         If tree is NULL, returns 0.
 *
 * Description: This function calculates the balance factor of a binary tree.
 *              The balance factor is the difference between the heights of
 *              the left and right subtrees of a node. If the tree is NULL,
 *              it returns 0. The balance factor is computed by first finding
 *              the height of the left and right subtrees, and then subtracting
 *              the height of the right subtree from the height of the left
 *              subtree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right, difference;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	difference = (left - right);
	return (difference);
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
