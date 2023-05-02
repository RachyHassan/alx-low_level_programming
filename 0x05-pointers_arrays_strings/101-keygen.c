#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - generate passwords
  *
  *Return: always 0
  */
int main(void)
{
	int pass[100];
	int a, b, c;

	b = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		b += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - b) - '0' < 78)
		{
			c = 2772 - b - '0';
			b += c;
			putchar(c + '0');
			break;
		}
	}
	return (0);
}
