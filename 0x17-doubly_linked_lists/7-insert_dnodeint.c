#include "lists.h"

/**
 * delete_dnodeint_at_indec - a function that deletes node at the index
 * @head: starting pointer
 * @index: node to be deleted
 * Return: 1 if successful
 * -1 if fails
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new;
	unsigned int n;

	if (*head == NULL)
	{
		return (-1);
	}
	
	new = *head;
	if (index == 0)
	{
		*head = new->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}

		free(new);
		return (1);
	}
	
	for (n = 0; new != NULL && n < index; n++)
	{
		new = new->next;
	}
	
	if (new == NULL)
	{
		return (-1);
	}
	
	new->prev->next = new->next;
	
	if (new->next != NULL)
	{
		new->next->prev = new->prev;
	}
	free(new);
	return (1);
}
