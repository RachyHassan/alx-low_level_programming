#include "main.h"
#include <stdio.h>
/**
 * _puts- entry point
 * @str: string
 * Return: always0
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
