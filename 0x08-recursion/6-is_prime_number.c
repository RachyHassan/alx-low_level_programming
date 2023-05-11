#include "main.h"
int actual_prime(int m, int n);
/**
 * is_prime_number- determines if a number is a prime number
 * @n: number
 * Return: 1 if positive, 0 if negative
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculates a recurring prime number
 * @m: number
 * @n: iterator
 * Return: 1 if positive, 0 if negative
 */
int actual_prime(int m, int n)
{
	if (n == 1)
		return (1);
	if (m % n == 0 && n > 0)
		return (0);
	return (actual_prime(m, n - 1));
}
