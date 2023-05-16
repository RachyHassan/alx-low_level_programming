#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - sends a duplicate to a new memory location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *i;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	i = malloc(sizeof(char) * (a + 1));
	if (i == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		i[b] = str[b];
	return (i);
}
