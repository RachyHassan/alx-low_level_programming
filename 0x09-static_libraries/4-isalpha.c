#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: character
 * Return: 1 if positive, 0 if negative
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
