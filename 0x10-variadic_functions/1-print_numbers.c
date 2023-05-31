#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints out integers
 * @separator: a character printed between integers
 * @n: number of integrs passed
 * @...:number of integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int value;

	va_start(nums, n);

	for (value = 0; value < n; value++)
	{
		printf("%d", va_arg(nums, int));

		if (value != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

