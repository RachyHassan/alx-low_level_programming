#include "main.h"
/**
  * print_number- entry point
  * @n: an integer representing a function that prins an integer
  * Return: always 0
  */
void print_number(int n)
{
	unsigned int l;

	l = n;
	if (n < 0)
	{
		_putchar(45);
		l = -n;
	}
	if (l / 10)
	{
		print_number(l / 10);
		_putchar(l % 10 + '0');
	}
}
