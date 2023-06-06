#include "lists.h"

/**
 * reverse_listint - this reverses a linked list (last becomes first)
 * @head: pointer to the first node
 *
 * Return: pointer to the first node in the newly reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *init = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = init;
		init = *head;
		*head = next;
	}

	*head = init;

	return (*head);
}

