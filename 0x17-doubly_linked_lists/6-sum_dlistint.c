#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data of a doubly linked list
 *
 * @head: head of the list
 *
 * Return: sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int v = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			v += head->n;
			head = head->next;
		}
	}

	return (v);
}
