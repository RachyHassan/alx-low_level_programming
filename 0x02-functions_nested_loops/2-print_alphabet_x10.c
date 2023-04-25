#include "main.h"
/**
  * print_alphabet_x10- Entry point
  * Description: 'print alphabets 10 times'
  * Return: always 0
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 97; i <= 122; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			putchar(j);
		}
		_putchar('\n');
	}
}
