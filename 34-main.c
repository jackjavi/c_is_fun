#include "main.h"

/**
 * main - Runs other functions
 * 
 * Return: Always 0.
 */
int main()
{
	int a, b;

	printf("Enter the first integer (a): ");
	scanf("%d", &a);
	printf("Enter the second integer (b): ");
	scanf("%d", &b);

	calc(a, b);

	return (0);
}
