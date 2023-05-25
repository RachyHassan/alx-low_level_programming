#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that prints the content of an array
 * @array: array to be printed
 * @size: number of elements
 * @action: pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int v;

	if (array == NULL || action == NULL)
		return;
	for (v = 0; v < size; v++)
	{
		action(array[v]);
	}
}
