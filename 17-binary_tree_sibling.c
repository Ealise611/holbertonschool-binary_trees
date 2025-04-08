#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node whose sibling is to be found.
 *
 * Return: A pointer to the sibling node, or NULL if there is no sibling,
 *         or if the node or its parent is NULL.
 *
 * Description: This function checks the parent of the given node. If the node
 *              has a parent and the parent has both left and right children,
 *              it returns the pointer to the other child (the sibling).
 *              If the node is NULL, or the parent is NULL, or the node has
 *              no sibling, the function returns NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if ((node == NULL) || (node->parent == NULL))
		return (0);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
