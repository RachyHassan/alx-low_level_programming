#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints string variables, and a new line
 * @separator: string seperating two strings
 * @n: number of strings in the function
 * @...: number of strings to be printed at the end of the code
 * Return: This prints if all strings are present
 * if one string is not, it returns 'nil'
 * if seperator is not, nothing is printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int value;

	va_start(strings, n);

	for (value = 0; value < n; value++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (value != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

