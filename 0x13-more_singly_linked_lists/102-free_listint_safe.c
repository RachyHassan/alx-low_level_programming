#include "lists.h"

/**
 * free_listint_safe - frees a list of used memory
 * @h: pointer to the first node
 *
 * Return: total number in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int list;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		list = *h - (*h)->next;
		if (list > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

