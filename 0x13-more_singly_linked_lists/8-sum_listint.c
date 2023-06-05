#include "lists.h"

/**
 * sum_listint - adds up all the data in a linked list
 * @head: first node in the ist
 *
 * Return: product
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}

