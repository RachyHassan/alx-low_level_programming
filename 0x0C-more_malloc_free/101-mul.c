#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks for digit in a string
 * @s: string to be checked
 * Return: 0 if none is found, else return 1
 */
int is_digit(char *s)
{
	int v = 0;

	while (s[v])
	{
		if (s[v] < '0' || s[v] > '9')
			return (0);
		v++;
	}
	return (1);
}
/**
 * strlen - length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int w = 0;

	while (s[w] != '\0')
	{
		w++;
	}
	return (w);
}
/**
 * _putchar - prints out character
 * @c: character
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * errors - checks through main for errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two integers
 * @argc: number of integers
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, c, d1, d2, *r, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	r = malloc(sizeof(int) * l);
		if (!r)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		r[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		c = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			c += r[l1 + l2 + 1] + (d1 * d2);
			r[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[l1 + l2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (r[i])
			a = 1;
		if (a)
			_putchar(r[1] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
