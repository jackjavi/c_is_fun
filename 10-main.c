#include <stdio.h>

/**
 * main - pointer to a pointer
 * 
 * Return: Always 0.
 */
int main(void)
{
	int num = 123;
	int *pr2;
	int **pr1;

	pr2 = &num;
	pr1 = &pr2;

	/* Possible ways to find the value of var num */
	printf("Value of num is :%d\n", num);
	printf("Value of num using pr2 is: %d\n", *pr2);
	printf("Value of num using pr1 is: %d\n", **pr1);

	/* Possible ways to find address of num */
	printf("Address of num is: %p\n", &num);
	printf("Address of num using pr2: %p\n", pr2);
	printf("Address of num using pr: %p\n", *pr1);

	/* Find value of a pointer */
	printf("Value of pointer pr2 is: %p\n", pr2);
	printf("Value of pointer using pr1 is: %p\n", *pr1);

	/* Ways to find the address of pointer */
	printf("Address of pointer pr2 is: %p\n", &pr2);
	printf("Address of pointer pr2 using pr1 is: %p\n", pr1);
	/* Double pointer value and address */
	printf("Value of pointer pr1 is: %p\n", pr1);
	printf("Address of pointer pr1 is: %p\n", &pr1);

	return (0);
}
