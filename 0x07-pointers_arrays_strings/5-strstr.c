#include "main.h"
/**
 * _strstr- entry point
 * @haystack: input
 * @needle: input
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *r = needle;

		while (*i == *r && *r != '\0')
		{
			i++;
			r++;
		}
		if (*r == '\0')
			return (haystack);
	}
	return (0);
}
