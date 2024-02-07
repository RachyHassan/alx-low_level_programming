#include "search_algos.h"
#include <math.h>
/**
 * jump_search - A function that searches for a value in a sorted array
 * using jump search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: number of eements in the array
 * @value: value to search for
 * @return: first index where value is located
 * if value is not present, return -1
 * if array is NULL, return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t i;
	size_t current = jump;

	if (array == NULL || size == 0)
		return (-1);

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", current, array[current]);
		prev = current;
		current += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, current);
	
	for (i = prev; i < size && i < current; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
