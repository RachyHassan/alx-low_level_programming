#include "main.h"
#include <stdio.h>
#define BUFFER_SIZE 1024
/**
 * main - point of entry
 * @argc: argument count
 * @argv: array
 * Return: values in code
 */

int main(int argc, char *argv[])
{
	int from, to;
	char buff[BUFFER_SIZE];
	ssize_t b_read;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[1]);
		exit(98);
	}
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(2, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
	while ((b_read = read(from, buff, BUFFER_SIZE)) > 0)
	{
		if (write(to, buff, b_read) != b_read)
		{
			dprintf(2, "Error: Can't write to file %s\n", argv[2]);
			return (99);
		}
	}
	if (b_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	close(from);
	close(to);

	return (0);
}

