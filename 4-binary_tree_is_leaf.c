#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf (has no children)
 *
 * @node: Pointer to the node to check
 *
 * Description: checks whether a node is a leaf. A node is considered a leaf
 * if it has no left or right children.
 * If the node is NULL, the function returns 0.
 *
 * Return: 1 if the node is a leaf,
 * 0 if the node is not a leaf or if the node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*a leaf node is no more child node, left and right are both NULL*/
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);

}
