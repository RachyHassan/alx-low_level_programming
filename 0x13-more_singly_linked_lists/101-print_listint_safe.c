#include <stdio.h>
#include "lists.h"
size_t print_listint_safe(const listint_t *head);
size_t looped_listint_len(const listint_t *head);
/**
 * looped_listint_len - Counts the number of special nodes in a list
 * @head: A pointer to the head of the list in question
 * Return:Number of special nodes, else 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tort = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tort == hare)
		{
			tort = head;
			while (tort != hare)
			{
				nodes++;
				tort = tort->next;
				hare = hare->next;
			}

			tort = tort->next;
			while (tort != hare)
			{
				nodes++;
				tort = tort->next;
			}

			return (nodes);
		}

		tort = tort->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - safely prints out a linkint list
 * @head: A pointer to the first on the list
 *
 * Return: The number of nodes present in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

