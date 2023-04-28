#include "main.h"
/**
  * more_numbers- Entry point
  * Return: void
  */
void more_numbers(void)
{
	int a, b;

	for (a = 0, a <= 10; a++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
