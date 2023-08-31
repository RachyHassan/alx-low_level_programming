#include "main.h"
/**
 * print_binary - prints a binary number
 * @ int n: integer
 * return: integer
 */

void print_binary(unsigned long int n)
{
	int m = 0, binary_array[64], j;
	if (n == 0)
	{
		putchar ('0');
		return;
	}

	while (n > 0)
	{
		binary_array[m] = n & 1; /*converts int to lowest bit */
		n >>= 1; /* move by 1 */
		i++;   /* divides m by 2 and stores the remainder in an array */
	}
	
	for (j = i - 1; j >= 0; j--)
	{
		putchar(binary_array[j] + '0');
	}
	return 0;
}
