#include "main.c"
/**
  * print_most_numbers - entry point
  * description: print numbers
  * Return: numbers
  */
void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
		_putchar('\n')
}
