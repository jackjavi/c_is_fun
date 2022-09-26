#include <stdio.h>

/**
 * main - a pointer to a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int var;
	int *ptr;
	int **pptr;

	var = 3000;
	ptr = &var;
	pptr = &ptr;
	printf("The value of var: %d\n", var);
	printf("The value available at *ptr: %d\n", *ptr);
	printf("The value available at **pptr: %d\n", **pptr);
	return (0);
}
