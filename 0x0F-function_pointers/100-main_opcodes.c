#include <stdlib.h>
#include <stdio.h>
/**
 * main- prints opcodes
 * @argc: number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int no_of_bytes, n;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	no_of_bytes = atoi(argv[1]);
	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ar = (char *)main;

	for (n = 0; n < no_of_bytes; n++)
	{
		if (n == no_of_bytes - 1)
		{
			printf("%02hhx\n", ar[n]);
			break;
		}
		printf("%02hhx ", ar[n]);
	}
	return (0);
}
