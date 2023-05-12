#include "main.h"
/**
 * _strcpy - a function that copies the string
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int p = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; p < i; p++)
	{
		dest[p] = src[p];
	}
	dest[i] = '\0';
	return (dest);
}
