#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print $
 *
 * Return: Always 0
 */
int main(void)
{
	char *buff = NULL;
	size_t length = 0;
	ssize_t input;

	while (1)
	{
		printf("$ ");
		fflush(stdout);

		buff = (char *)malloc(length);

		if (buff == NULL)
		{
			perror("Error allocating memory");
			break;
		}

		input = getline(&buff, &length, stdin);
		if (input == -1)
		{
			perror("Error reading input");
			free(buff);
			break;
		}
		if (input > 0 && buff[input - 1] == '\n')
		{
			buff[input - 1] = '\0';
		}
		printf("%s\n", buff);
		free(buff);
	}
	return (0);
}
