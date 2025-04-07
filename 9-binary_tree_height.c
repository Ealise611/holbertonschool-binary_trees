#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

int max(int a, int b);

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height of
 *
 * Description: This function measures the height of a binary tree.
 * The height of a binary tree is the number of edges on the longest path
 * from the root to a leaf. If the tree is NULL, the function returns 0
 * indicating that the tree has no height.
 *
 * Return: The height of the tree, or 0 if the tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftheight, rightheight;

	if (tree == NULL)
	       return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);
	return (max(leftheight, rightheight) + 1);
}

/**
 * max - return max num
 * @a: num1
 * @b: num2
 *
 * Return: max num
 */

int max(int a, int b)
{
    if (a > b)
    {
	    return (a);
    }
    else
	    return (b);
}
