#include "main.h"

/**
 * calc - calls add and sub functions.
 * @a: First integer.
 * @b: Second integer.
 */
void calc(int a, int b)
{
	int sum, diff;

	sum = add(a, b);
	diff = sub(a, b);

	printf("The sum of %d and %d is : %d\n", a, b, sum);
	printf("The difference between %d and %d is : %d\n", a, b, diff);
}
