#include "main.h"
#include <unistd.d>
/**
 *_putchar - writes character to stdout
 *@c: character to print
 *Return: success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
