#include <stdio.h>
#include "main.h"
/**
 * main - prints name of a program
 * @argc: argument count
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}