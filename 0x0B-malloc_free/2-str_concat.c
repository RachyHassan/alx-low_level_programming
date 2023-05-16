#include "main.h"
#include <stdlib.h>
/**
 * str_concat - adds the size of inputs together
 * @s1: input 1
 * @s2: input 2
 * Return: addition of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int l, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l = m = 0;
	while (s1[l] != '\0')
		l++;
	while (s2[m] != '\0')
		m++;
	cat = malloc(sizeof(char) * (l + m + 1));
	if (cat == NULL)
		return (NULL);
	l = m = 0;
	while (s1[l] != '\0')
	{
		cat[l] = s1[l];
		l++;
	}
	while (s2[m] != '\0')
	{
		cat[l] = s2[m];
		l++, m++;
	}
	cat[l] = '\0';
	return (cat);
}
