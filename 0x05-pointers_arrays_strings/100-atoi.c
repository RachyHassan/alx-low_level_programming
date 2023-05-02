#include "main.h"
/**
  * _atoi - convert strings to integers
  * @s: string
  * Return: an integer
  */
int _atoi(char *s)
{
	int a, b, c, len, d, num;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	d = 0;
	num = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			num = s[a] - '0';
			if (b % 2)
				num = -num;
			c = c * 10 + num;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
