#include <stdio.h>

/**
 * write your line of code here...
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - only one statement * - you are not allowed to
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/* adding any of these lines makes code print "a[2] = 98" at output */
	p[5] = 98; //OR *(p + 5) = 98;
	printf("a[2] = %d\n", a[2]); //Prints a[2] = 98
	return (0);
}
