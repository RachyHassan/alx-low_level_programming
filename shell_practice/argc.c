#include <stdio.h>
#include <unistd.h>
/**
 * main - argv
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int v;

	while (v < ac)
	{
		printf("Argument %d is: %s\n", v, av[v]);
		v++;
	}
	return (0);
}
