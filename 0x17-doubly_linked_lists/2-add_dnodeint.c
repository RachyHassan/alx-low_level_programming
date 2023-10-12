#include "lists.h"

/**
 * add_dnodeint - this adds a new node at the begining of a linked list
 * @head: pointer to the first node
 * @n: new node
 * Return: address to new node if successfull
 * NULL if fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *m;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	m = *head;

	if (m != NULL)
	{
		while (m->prev != NULL)
			m = m->prev;
	}

	node->next = m;

	if (m != NULL)
		m->prev = node;
	*head = node;

	return (node);
}
