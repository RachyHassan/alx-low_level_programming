#include "main.h"
/**
 * _memcpy- a function to copy memory area
 * @dest: memory is stored here
 * @src: this memory is copied
 * @n: number of bytes
 * Return: copied memory with bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
