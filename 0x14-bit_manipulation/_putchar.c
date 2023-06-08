#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character to stdout
 * @c: The character to be printed
 *
 * Return: Success (always 1), if failed, return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

