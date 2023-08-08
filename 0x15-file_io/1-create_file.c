#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: the file to create.
 * @text_content: the to a string to write to the file.
 *
 * Return: Fail  -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int bc, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	bc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(bc, text_content, len);

	if (bc == -1 || w == -1)
		return (-1);

	close(bc);

	return (1);
}
