#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: character
 * Return: on success 1.
 * On error, -1, erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
