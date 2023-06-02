#include <stdlib.h>
#include "lists.h"
/**
 * list_len - calculates number of elements in a list
 * @h: pointer
 * Return: total number
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		p++;
		h = h->next;
	}
	return (p);
}

