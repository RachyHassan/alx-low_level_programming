#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees arrays
 * @grid:array
 * @height: dimension
 * Return: always 0
 */
void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
