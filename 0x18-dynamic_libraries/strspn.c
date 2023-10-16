#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				p++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (p);
		}
		s++;
	}
	return (p);
}
