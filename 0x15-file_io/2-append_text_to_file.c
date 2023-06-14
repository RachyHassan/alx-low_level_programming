#include "main.h"

/**
 * append_text_to_file - Adds a new text at the end of the file
 * @filename: A pointer to the filename
 * @text_content: The string added at the end of the line
 *
 * Return: - -1 if the function either fails or there's no filename
 *         If file has not being created or
 *          user has no permission to write, - -1
 *         else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, len);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

