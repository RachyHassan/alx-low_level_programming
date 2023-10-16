#include "main.h"
/**
  * _strncpy - copy strings
  * @dest: string 1
  * @src: string 2
  * @n: integer
  * Return: copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[m] = src[m];
		m++;
	}
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
