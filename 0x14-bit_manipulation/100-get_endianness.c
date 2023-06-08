#include "main.h"

/**
 * get_endianness - checks the endian size of a machine (wether big or small)
 * Return: 0 (if big), 1 (if little)
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}

