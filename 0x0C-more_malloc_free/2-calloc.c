#include "main.h"
#include <stdlib.h>
/**
 * _memset - a program that fills memory with a fixed byte
 * @s:memory area
 * @b: character
 * @n: number of times character is copied
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
/**
 * _calloc - allocates memory
 * @nmemb: number of elements
 * @size: element size
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}
