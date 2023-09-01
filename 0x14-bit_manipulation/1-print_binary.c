#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints a binary number
 * @n: integer
 * return: a binary number
 */

void print_binary(unsigned long int n)
{
	int m = 0, binary_array[64], j;

	if (n == 0)
	{
		_putchar ('0');
	}

	while (n > 0)
	{
		binary_array[m] = n & 1; /*converts int to lowest bit */
		n >>= 1; /* move by 1 */
		m++;   /* divides m by 2 and stores the remainder in an array */
	}

	for (j = m - 1; j >= 0; j--)
	{
		_putchar(binary_array[j] + '0');
	}
		return;
}
