#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: an unsigned pointer
 * @index: the number to be set
 * Return: 1 if positive, -1 if negative
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = ((1UL << index) | *n);
	return (1);
}
