#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
 * struct list_s - a function for stringly linked lists
 * @len: length
 * @str: malloc string
 * @next: a pointer to the next node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
size_t list_len(const list_t *h);
void free_list(list_t *head);
size_t print_list(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
#endif
