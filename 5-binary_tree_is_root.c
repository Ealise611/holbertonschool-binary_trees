#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 *
 * @node: Pointer to the node to check
 *
 * Description: checks whether a node is a root.
 * If the node is NULL, the function returns 0.
 *
 * Return: 1 if the node is a root,
 * 0 if the node is not a root or if the node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
