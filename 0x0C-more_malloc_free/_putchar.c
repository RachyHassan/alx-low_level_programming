#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: character
 * Return: 1 if positive
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
