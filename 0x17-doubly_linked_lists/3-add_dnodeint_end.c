#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: node at the begining of the list
 * @n: node to be added at the ed
 * Return: address to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *m;
	
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	
	node->n = n;
	node->next = NULL;
	
	m = *head;
	
	if (m != NULL)
	{
		while (m->next != NULL)
			m = m->next;
		m->next = node;
	}
	else
	{
		*head = node;
	}
	
	node->prev = m;
	return (node);
}
