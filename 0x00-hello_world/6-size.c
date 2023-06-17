#include <stdio.h>
/**
 * main - printing the size of various computer types
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of s char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of s int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of s long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of s long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of s float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

