#include "main.h"

/**
 * print_binary - prints out a decimal number in binary form
 * @n: binary number to be printed
 */
void print_binary(unsigned long int n)
{
	int v, count = 0;
	unsigned long int current;

	for (v = 63; v >= 0; v--)
	{
		current = n >> v;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

