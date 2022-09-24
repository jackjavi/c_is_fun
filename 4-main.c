#include <stdio.h>

/**
 * main - prints the fahrenheit - celsius table
 *
 * Return: Always 0.
 */
int main(void)
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (fahr - 32) * 5 / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr += step;
	}

	return (0);
}
