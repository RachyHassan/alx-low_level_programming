#include "main.h"
/**
  * _strcpy - a function that copies a string from one place to another
  * @dest: second location
  * @src: first location
  *Return: string
  */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
