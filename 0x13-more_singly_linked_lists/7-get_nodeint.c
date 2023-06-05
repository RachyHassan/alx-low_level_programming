#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a specific index
 * @head: first node
 * @index: index of the requested node
 *
 * Return: pointer to the requested node or NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int v = 0;
	listint_t *temp = head;

	while (temp && v < index)
	{
		temp = temp->next;
		v++;
	}

	return (temp ? temp : NULL);
}

