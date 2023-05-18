#include "main.h"
#include <stdlib.h>
/**
 * _realloc: - reallocated memory with malloc and free
 * @ptr: pointer
 * @old_size: previous size allocated
 * @new_size: new size allocated
 * Return: new pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p1;
	char *p2;
	unsigned int q;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p1 = malloc(new_size);
	if (!p1)
		return (NULL);
	p2 = ptr;
	if (new_size < old_size)
	{
		for (q = 0; q < new_size; q++)
			p1[q] = p2[q];
	}
	if (new_size > old_size)
	{
		for (q = 0; q < old_size; q++)
			p1[q] = p2[q];
	}
	free(ptr);
	return (p1);
}
