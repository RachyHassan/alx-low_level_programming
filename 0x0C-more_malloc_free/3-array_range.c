#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates array
 * @min: minimum integers in array
 * @max: maximum integers in array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	int l, m;

	if (min > max)
		return (NULL);
	m = max - min + 1;
	p = malloc(sizeof(int) * m);
	if (p == NULL)
		return (NULL);
	for (l = 0; min <= max; l++)
		p[l] = min++;
	return (p);
}
