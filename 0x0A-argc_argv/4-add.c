#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check the string
 * @str: array str
 * Return: Always 0 (success)
 */
int check_num(char *str)
{
	unsigned int v;
	v = 0;

	while (v < strlen(str))
	{
		if (!isdigit(str[v]))
		{
			return (0);
		}
		v++;
	}
	return (1);
}
/**
 * main - print name of program
 * @argc: count arguments
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int v;
	int str_to_int;
	int sum = 0;

	v = 1;

	while (v < argc)
	{
		if (check_num(argv[v]))
		{
			str_to_int = atoi(argv[v]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		v++;
	}
	printf("%d\n", sum);
	return (0);
}
