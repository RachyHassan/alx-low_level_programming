#include "lists.h"

/**
 * pop_listint - removes the main (head) node in a list
 * @head: pointer to the 1st element
 *
 * Return: the data in the deleted element or nothing if the element was empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int dat;

	if (!head || !*head)
		return (0);

	dat = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (dat);
}

