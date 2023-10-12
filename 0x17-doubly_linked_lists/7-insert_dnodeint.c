#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given position
 * @h: node pointer
 * @idx: index of the new node
 * @n: node to be added
 *
 * Return: address of the node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	
	new_node->prev = NULL;
	
	new_node->next = NULL;
	
	if (*h == NULL && idx == 0)
	{
		*h = new_node;
		return (new_node);
	}
	

	if (*h != NULL && idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		
		return (new_node);
	}
	
	current = *h;
	
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}
	

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->next = current->next;

	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
