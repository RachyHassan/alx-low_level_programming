#include "main.h"

/**
 * flip_bits - flips bits
 * @n: unsigned long
 * @m: unsigned long
 * Return: flipped bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, count = 0;

	while (xor > 0)
	{
		if (xor & 1)
		{
			count++;
		}
		xor >>= 1;
	}
	return (count);
}
