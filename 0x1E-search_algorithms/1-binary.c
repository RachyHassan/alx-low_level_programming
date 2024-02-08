#include "search_algos.h"
/**
 * binary_search - A function that searches for a value
 * in a sorted array of integers using binary search
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value islocated
 * if value is not present, return -1
 * if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int low_index = 0;
	int high_index = size - 1;
	int middle_index;

	if (array == NULL || size == 0)
		return (-1);

	while (low_index <= high_index)
	{
		middle_index = low_index + (high_index - low_index) / 2;

		printf("Searching in array: ");
		for (i = low_index; i <= high_index; i++)
		{
			printf("%d", array[i]);
			if (i != high_index)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[middle_index] == value)
		{
			printf("Found %d at index: %d\n", value, middle_index);
			return (middle_index);
		}

		else if (array[middle_index] > value)
		{
			high_index = middle_index - 1;
		}

		else
		{
			low_index = middle_index + 1;
		}
	}
	return (-1);
}
