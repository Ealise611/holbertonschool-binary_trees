#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node whose uncle is to be found.
 *
 * Return: A pointer to the uncle node, or NULL if the node has no uncle,
 *         or if the node is NULL.
 *
 * Description: This function finds the uncle of the given node. The uncle
 *              of a node is the sibling of its parent. If the node or its
 *              parent is NULL, or if the node has no uncle, the function
 *              returns NULL. If the parent of the node has no sibling,
 *              there is no uncle, and the function returns NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if ((node == NULL) || (node->parent->parent == NULL))
		return (NULL);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (NULL);
}
