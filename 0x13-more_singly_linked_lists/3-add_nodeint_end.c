#include "lists.h"

/**
 * add_nodeint_end - inserts a node to the end of a list
 * @head: pointer to the 1st element
 * @n: new data
 *
 * Return: node pointer, or NULL if negative
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w;
	listint_t *temp = *head;

	w = malloc(sizeof(listint_t));
	if (!w)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (*head == NULL)
	{
		*head = w;
		return (w);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = w;

	return (w);
}

