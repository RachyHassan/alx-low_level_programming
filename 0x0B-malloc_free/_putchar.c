#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes a character
 * @c: character
 * Return: 1 if positive, -1 if negative.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
