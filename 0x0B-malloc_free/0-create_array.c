#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates arrayand assignes characters
 * @size: array size
 * @c: character
 * Return: Null if negative, pointer to array if positive
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int m;

	n = malloc(sizeof(char) * size);
	if (size == 0 || n == NULL)
		return (NULL);
	for (m = 0; m < size; m++)
		n[m] = c;
	return (n);
}
