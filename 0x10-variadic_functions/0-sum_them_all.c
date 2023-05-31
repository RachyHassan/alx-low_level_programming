#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - calculates the sum of all variables
 * @n: number of parameters
 * @...: number of parameters to calculate
 * Return: if positive, return sum. Else return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int m, sum = 0;

	va_start(ap, n);

	for (m = 0; m < n; m++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

