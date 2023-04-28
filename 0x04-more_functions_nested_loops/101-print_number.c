#include "main.h"
/**
  * print_number- entry point
  * @n: an integer representing a function that prins an integer
  * Return: always 0
  */
void print_number(int n)
{
	unsigned int l = n;

	if (n < 0)
	{
		n <= -1;
		l = n;
		_putchar('-');
	}
	l /= 10;
	if (l != 0)
		print_number(l);
	_putchar((unsigned int) n % 10 + '0');
}
