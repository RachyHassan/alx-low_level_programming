#include <stdio.h>
#include "main.h"
/**
  * print_array - prints the elements in an array
  * @a: name of an array
  * @n: numbers in an array
  * Return: numbers of a and n
  */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
	if (m == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
