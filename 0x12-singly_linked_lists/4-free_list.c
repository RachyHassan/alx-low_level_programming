#include "lists.h"
#include <stdlib.h>
/**
 * free_list - a command to free the list
 * @head:List to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

