#include "main.h"

/**
 * binary_to_uint - changes a number from binary to unsigned integer
 * @b: string with the binary number to be converted
 *
 * Return:End product of the conversion
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[n] - '0');
	}

	return (dec_val);
}

