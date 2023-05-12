#include "main.h"
/**
 * _strchr - entry point
 * @s: input
 * @c: input
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	int m = 0;

	for (; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}
