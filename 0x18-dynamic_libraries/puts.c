#include "main.h"
/**
  * _puts -prints a string, followed by a new line
  *
  * @str: a string
  *
  * Return: a output to stdout
  */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
