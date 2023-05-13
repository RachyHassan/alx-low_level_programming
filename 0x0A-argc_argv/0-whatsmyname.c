#include <stdio.h>
#include "main.h"
/**
 * main - prints name of a program
 * @argc: argument count
 * _attribute_((unused)): unused attribute
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
