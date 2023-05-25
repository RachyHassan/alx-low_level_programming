#include "function_pointers.h"
/**
 * int_index - prints index
 * @array: contains array to be printed
 * @size: contains size of the array
 * @cmp: a pointer to the function
 * Return: always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]))
			return (m);
	}
	return (-1);
}
