#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list.
 * @head: head of the list
 * @index: index of the node
 *
 * Return: nth node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;
	dlistint_t *new;
	
	len = 0;
	
	if (head == NULL)
		return (NULL);
	new = head;
	
	while (new)
	{
		if (index == len)
			return (new);
		len++;
		
		new = new->next;
	}
	return (NULL);
}
