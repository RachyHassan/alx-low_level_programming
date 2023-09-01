#include "main.h"

/**
 * clear_bit - changes the value at a given index to 0
 * @n: unsigned long int
 * @index: value to be changed
 * Return: 1 if positive, -1 if negative
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}
