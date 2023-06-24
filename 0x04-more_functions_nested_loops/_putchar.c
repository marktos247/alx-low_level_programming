#include "main.h"
#include <unistd.h>
/**
 * _putchar - A function to write character t to stdout
 * @c: The character to print
 *
 * Return: 1
 * oOn error, -1 is returned and errno is set appropiately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
