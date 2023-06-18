#include <stdio.h>
/**
 * main - printing the size of various computer types
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int m;
	long long int x;
	float y;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));
return (0);
}
