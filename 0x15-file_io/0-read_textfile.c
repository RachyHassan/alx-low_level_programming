#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- Reads text file then prints to STDOUT
 * @filename: text file to be read
 * @letters: number of letters from text file to be read
 * Return: total number of bytes to be read, 0 if function fails
 * and filename if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fn;
	ssize_t v;
	ssize_t r;

	fn = open(filename, O_RDONLY);
	if (fn == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	r = read(fn, buf, letters);
	v = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fn);
	return (v);
}

