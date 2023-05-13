#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: character
 * Return: 1 if positive, -1 if negative, errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
