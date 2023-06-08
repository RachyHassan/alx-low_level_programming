#include "main.h"

/**
 * flip_bits - counts the number of bits and changes them from one to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int v, counts = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (v = 63; v >= 0; v--)
	{
		current = exclusive >> v;
		if (current & 1)
			counts++;
	}

	return (counts);
}

