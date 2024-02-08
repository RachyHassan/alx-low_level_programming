#include "search_algos.h"
/**
 * linear_search - A function to search for a value in an array
 * @array: a pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 * if value is not present, return -1
 * if array is NULL, return -1
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			printf("Found %d at index: %u\n", value, i);
			return (i);
		}
	}

	return (-1);
}
