#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: unsigned long
 * @index: bit to be printed
 * Return: value at index or -1 if negative
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	val = (n >> index) & 1;

	return (val);
}
