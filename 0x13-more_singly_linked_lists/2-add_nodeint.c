#include "lists.h"

/**
 * add_nodeint - inputsa new node at the start of a linked list
 * @head: pointer to the first node
 * @n: data to be inserted
 *
 * Return: pointer, or NULL if negative
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


