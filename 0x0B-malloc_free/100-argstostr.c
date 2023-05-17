#include "main.h"
#include <stdlib.h>
/**
 * argstostr - entry point
 * @ac: input
 * @av: array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int l, m, n = 0, p = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
			p++;
	}
	p += ac;
	str = malloc(sizeof(char) * p + 1);
	if (str == NULL)
		return (NULL);
	for (l = 0; l < ac; l++)
	{
		for (m = 0; av[l][m]; m++)
		{
			str[n] = av[l][m];
			n++;
		}
		if (str[n] == '\0')
		{
			str[n++] = '\n';
		}
	}
	return (str);
}
