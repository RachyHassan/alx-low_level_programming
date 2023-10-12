#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head of the linked list
 * Return: total number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int l = 0;
	
	if (h == NULL)
		return (l);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		l++;
		h = h->next;
	}
	
	return (l);
}
