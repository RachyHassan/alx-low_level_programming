#include "main.h"
int actual_sqrt_recursion(int a, int b);
/**
 * _sqrt_recursion - returns the square root
 * @n: number
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find the square root
 * @a: number
 * @b: iterator
 * Return: result
 */
int actual_sqrt_recursion(int a, int b)
{
	if (b * b > a)
		return (-1);
	if (b * b == a)
		return (b);
	return (actual_sqrt_recursion(a, b + 1));
}
