#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - this function creates a binary tree node
 * when created, a node does not have any child
 *
 * @parent: is a pointer to the parent node of the node to create
 * @value:  is the value to put in the new node
 *
 * Description: create a binary tree
 *
 * Return: return a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
