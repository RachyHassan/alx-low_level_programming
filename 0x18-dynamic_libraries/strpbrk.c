#include "main.h"
/**
 * _strpbrk- entry point
 * @s: input
 * @accept: input
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int v;

	while (*s)
	{
		for (v = 0; accept[v]; v++)
		{
			if (*s == accept[v])
				return (s);
		}
		s++;
	}
	return ('\0');
}
