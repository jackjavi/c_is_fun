#include <stdio.h>

/**
 * main - prints celsius - fahrenheit table
 *
 * Return: Always 0.
 */
int main(void)
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	celsius = lower;
	printf("CELSIUS - FAHRENHEIT TABLE\n\n");
	while (celsius <= upper)
	{
		fahr = (celsius * 9.0 / 5.0) + 32;
		printf("%3.2f%9.2f\n", celsius, fahr);
		celsius += step;
	}

	return (0);
}
