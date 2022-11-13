#include <stdio.h>

/**
 * main - adds two numbers
 *
 * Return: ALways 0.
 */
int main()
{
	int a, b, sum;

	printf("Enter integer a :");
	scanf("%d", &a);
	printf("Enter integer b :");
	scanf("%d", &b);
	sum = a + b;
	printf("Sum of a and b is : %d\n", sum);

	return (0);
}
