#include <stdio.h>

/**
 * main - prints fahr - celsius table
 * in reverse
 *
 * Return: Always 0.
 */
int main(void)
{
	float fahr, celsius;

	printf("FAHRENHEIT - CELSIUS TABLE IN REVERSE\n\n");
	for (fahr = 300.0; fahr >= 0; fahr -= 20)
	{
		celsius = (fahr - 32) * 5.0 / 9.0;
		printf("%3.2f%9.2f\n", fahr, celsius);
	}

	return (0);
}
