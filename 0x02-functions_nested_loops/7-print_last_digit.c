#include "main.h"
/**
  * print_last_digit- Entry point
  * @c: integer
  * Description: 'print last digit'
  * Return: always 0
  */
int print_last_digit(int c)
{
	int b;

	b = c % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
}
