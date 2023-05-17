#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a grid with nested loops
 * @width: input
 * @height: input
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int n, m;
	int **v;

	if (width <= 0 || height <= 0)
		return (NULL);
	v = (int **) malloc(sizeof(int *) * height);
	if (v == NULL)
		return (NULL);
	for (n = 0; n < height; n++)
	{
		v[n] = (int *) malloc(sizeof(int) * width);
		if (v[n] == NULL)
		{
			for (; n >= 0; n--)
				free(v[n]);
			free(v);
			return (NULL);
		}
	}
	for (n = 0; n < height; n++)
	{
		for (m = 0; m < width; m++)
		{
			v[n][m] = 0;
		}
	}
	return (v);
}
