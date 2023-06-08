#include "main.h"

/**
 * set_bit - sets a bit to 1 at a particular index
 * @n: pointer to the number to be converted to 1
 * @index: index of the bit
 *
 * Return: 1 if successful, -1 if negative
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

