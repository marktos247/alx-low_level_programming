#include <stdio.h>
/**
 * main - printing the size of various computer types
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int x;
	float y;

printf("Size of s char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of s int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of s long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of s long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of s float: %lu byte(s)\n", (unsigned long)sizeof(y));
return (0);
}
