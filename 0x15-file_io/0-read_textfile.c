#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- A function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: Text file to be read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t bc;
	ssize_t w;
	ssize_t x;

	bc = open(filename, O_RDONLY);
	if (bc == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	x = read(bc, buf, letters);
	w = write(STDOUT_FILENO, buf, x);

	free(buf);
	close(bc);
	return (w);
}
