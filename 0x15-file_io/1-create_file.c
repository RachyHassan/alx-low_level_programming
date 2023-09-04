#include "main.h"
#include <string.h>
/**
 * create_file - function to create a file
 * @filename: name of the file
 * @text_content: null terminated string
 * Return: 1 if succesful amd -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		b_write = write(fd, text_content, strlen(text_content));
		if (b_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
