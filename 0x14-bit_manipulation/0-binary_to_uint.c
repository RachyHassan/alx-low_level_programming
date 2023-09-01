#include "main.h"
/**
 * binary_to_uint - changes binary to integers
 * @b: string
 * Return: integer
 */

unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int int_val = 0;

	if (!b)
		return (0);
	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		int_val = 2 * int_val + (b[p] - '0');
	}
	return (int_val);
}
