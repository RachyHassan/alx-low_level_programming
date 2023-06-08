#include "main.h"

/**
 * clear_bit - changes the value of a specific bit to 0
 * @n: pointer to the number to be changed to 0
 * @index: index of the bit
 * Return: 1 if successful, else print -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

