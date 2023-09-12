#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
int execute(int argc, char *argv[], char *envp[]);

/**
 * main - example
 *
 * Return: always 0
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};
	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error");
	}
	printf("After execve\n");
	return (0);
}

/**
 * main - execute a program
 * @argc: argumet count
 * @agrv[]: array
 * @envp[]: enviroment variable
 * Return: new process (same PID)
 */
int execute(int argc, char *argv[], char *envp[])
{
	char *program;
	char **new_argv;

	if (argc < 2)
	{
		printf("%s <program-executed>\n", argv[0]);
		return (1);
	}

	program = argv[1];
	new_argv = &argv[1];

	if (execve(program, new_argv, envp) == -1)
	{
		printf("execve failed: %s\n", strerror(errno));
		return (1);
	}
	printf("this is not supposed to be printed!\n");
	return (0);
}
