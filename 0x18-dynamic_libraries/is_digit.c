#include "main.h"
/**
  * _isdigit - Entry point
  * @c: checks for numbers
  * Return: always 1 or always 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
