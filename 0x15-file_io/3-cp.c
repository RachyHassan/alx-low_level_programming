#include <stdlib.h>
#include "main.h"
#include <stdio.h>
char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes in memory space to a buffer
 * @file: The filename buffer is storing chars for.
 *
 * Return: A pointer to the newly created buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor
 * @fd: The file descriptor being closed.
 */
void close_file(int fd)
{
	int m;

	m = close(fd);

	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents from one file to another.
 * @argc: The number of arguments
 * @argv: An array of pointers within the argumen
 *
 * Return: 0 (always success)
 *
 * Description: If the argument count is not correct - exit with code 97.
 * If file_from does not exist or is not readble - exit with code 98.
 * If file_to cannot be created or written to - exit with code 99.
 * If file_to or file_from does not close - exit with code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, m, n;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	m = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		n = write(to, buffer, m);
		if (to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		m = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (m > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

