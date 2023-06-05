#include "lists.h"
/**
 * print_listint - A function that prints all the elements in a linked list
 * @h: linked list to be printed
 * Return: total nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

