#include "3-calc.h"
int op_add(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_sub(int a, int b);
int op_div(int a, int b);
/**
 * op_add - adds two numbers
 * @a: num 1
 * @b: num 2
 * Return: product
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - multiplies two numbers
 * @a: num 1
 * @b: num 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - retuns the remainder of a modulo operation
 * @a: num 1
 * @b: num 2
 * Return: product
 */
int op_mod(int a, int b)
{
	return (a % b);
}
/**
 * op_sub - subtracts two numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - returns results of division
 * @a: integer 1
 * @b: integer 2
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
