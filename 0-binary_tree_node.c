#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node.
 * Return: If succesful a pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;
	
	tmp = NULL;

	tmp = calloc(1, sizeof(binary_tree_t));
	if (tmp != NULL)
	{
		memset(tmp, 1, 1, sizeof(binary_tree_t));

		tmp->parent = parent;
		tmp->n = value;
		
		return (tmp);
}
