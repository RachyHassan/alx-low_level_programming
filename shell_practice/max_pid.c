#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - max pid
 *
 * Return; Always 0
 */
int main(void)
{
	int max_limit;
	FILE *pid_max;

	pid_max = fopen("/proc/sys/kernel/pid_max", "r");
	if (pid_max == NULL)
	{
		return (1);
	}
	if (fscanf(pid_max, "%d", &max_limit) != 1)
	{
		fclose(pid_max);
		return (1);
	}

	printf("Max PID is : %d\n", max_limit);
	return (0);
}
