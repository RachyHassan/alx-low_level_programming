#include "main.h"
/**
  * rev_string - Prints a string in reverse
  *
  * @s: string
  * 
  * Return: string
  */
void rev_string(char *s)
{
	char rev = s[0];
	int a = 0;
	int b;

	while (s[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		a--;
		rev = s[b];
		s[b] = s[a];
		s[a] = rev;
	}
}
