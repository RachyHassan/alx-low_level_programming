#include "main.h"

/**
 * create_file - A function to create a new file
 * @filename: A pointer to the name of the file being created
 * @text_content: A pointer to the string written to the file
 *
 * Return: If negative, return --1
 *         Otherwise, return -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fn, q, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	q = write(fn, text_content, len);

	if (fn == -1 || q == -1)
		return (-1);

	close(fn);

	return (1);
}

