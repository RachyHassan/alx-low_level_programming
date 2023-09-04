#include "main.h"

/**
 * read_textfile - reads a file and returns the number of
 * printable characters
 * @filename: name of file
 * @letters: letters to be counted
 * Return: number of characters, 0 if null or failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buff;
	ssize_t  b_read;
	ssize_t b_write;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	b_read = read(fd, buff, letters);
	if (b_read == -1)
		return (0);

	b_write = write(STDOUT_FILENO, buff, b_read);
	if (b_write == -1 || b_write == b_read)
		return (0);

	free(buff);

	return (b_read);
}
