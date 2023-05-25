#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that points to a function that prints name
 * @name: string
 * @f: pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
