#include "main.h"
#include <stdio.h>
/**
 * print_buffer - entry point
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int w, x, y;

	w = 0;

	if (size <= w)
	{
		printf("\n");
		return;
	}
	while (w < size)
	{
		x = size - w < 10 ? size - w : 10;
		printf("%08x:", w);
		for (y = 0; y < 10; y++)
		{
			if (y < x)
				printf("%02x", *(b + w + y));
			else
				printf(" ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < x; y++)
		{
			int c = *(b + w + y);

			if (c < 32|| c > 132)
			{
				c = '.';
			}
			printf("%c",c);
		}
		printf("\n");
		w += 10;
	}
}
