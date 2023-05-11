#include "main.h"
int check_pal(char *s, int p, int q);
int _strlen_recursion(char *s);
/**
 * is_palindrome -checks if a string is a palindrome
 * @s: string
 * Return: 1 if positive, 0 if negative
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - checks the characters
 * @s: string
 * @p: iterator
 * @q: length of string
 * Return: 1 if positive, 0 if negative
 */
int check_pal(char *s, int p, int q)
{
	if (*(s + p) != *(s + q - 1))
		return (0);
	if (p >= q)
		return (1);
	return (check_pal(s, p + 1, q - 1));
}
