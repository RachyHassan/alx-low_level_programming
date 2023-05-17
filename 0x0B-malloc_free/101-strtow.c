#include "main.h"
#include <stdlib.h>
/**
 * count_word - counts number of words
 * @s: string to be counted
 * Return: number
 */
int count_word(char *s)
{
	int cnt, p, q;

	cnt = 0;
	q = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			cnt = 0;
		else
			if (cnt == 0)
			{
				cnt = 1;
				q++;
			}
	}
	return (q);
}
/**
 * strtow - splits strings
 * @str: string
 * Return: pointer
 */
char **strtow(char *str)
{
	char **max, *tmp;
	int a, b = 0, len = 0, wrd, c = 0, s, e;

	while (*(str + len))
		len++;
	wrd = count_word(str);
	if (wrd == 0)
		return (NULL);
	max = (char **)malloc(sizeof(char *) * (wrd + 1));
	if (max == NULL)
		return (NULL);
	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				e = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (s < e)
					*tmp++ = str[s++];
				*tmp = '\0';
				max[b] = tmp - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = a;
	}
	max[b] = NULL;
	return (max);
}
