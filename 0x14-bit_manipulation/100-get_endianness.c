#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int val = 1;
	unsigned char *ptr = (unsigned char *)&val;

	if (*ptr == 1)
	{
		return (1); /* first byte is 0 */
	}
	else
	{
		return (0);
	}
}
