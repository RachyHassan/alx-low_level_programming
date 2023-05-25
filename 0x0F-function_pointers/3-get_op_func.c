#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - prints correct function to perform operator tasks
 * @s: pointer
 * Return: pointer in relation to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"%", op_mod},
		{"/", op_div},
		{"-", op_sub},
		{"*", op_mul},
		{NULL, NULL},
	};
	int n = 0;

	while (ops[n].op != NULL && *(ops[n].op) != *s)
		n++;
	return (ops[n].f);
}
