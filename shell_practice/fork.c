#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
/**
 * main - fork and wait
 *
 * Return: child processes
 */
int main(void)
{
	pid_t child_pid;
	int status;
	int v;
	extern char **environ;

	for (v = 0; v < 5; v++)
	{
		child_pid = fork();

		if (child_pid == -1)
		{
			perror("fork error");
			exit(EXIT_FAILURE);
		}
		else if (child_pid == 0)
		{
			char *cmd = "/bin/ls";
			char *arg1 = "ls";
			char *arg2 = "-l";
			char *arg3 = "/tmp";
			char *const argv[] = {cmd, arg1, arg2, arg3, NULL};
			if (execve(cmd, argv, environ) == -1)
			{
				perror("execve");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(&status);
			printf("Child %d exited with status %d\n", v + 1, WEXITSTATUS(status));
		}
	}
	return (0);
}
