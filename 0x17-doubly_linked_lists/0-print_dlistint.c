#include "lists.h"

/**
 * print_dlistint - a function that prints all the
 * elements of a dlistint_t list
 * @h: constant integer as list head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	if (h == NULL)
		return (c);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}

	return (c);
}
