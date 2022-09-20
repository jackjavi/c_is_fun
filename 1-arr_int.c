#include "main.h"
#include <stdio.h>

/**
 * arr_int - prints the integers the array
 * @a: the arrray of integers.
 */
void arr_int(int a[])
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("integer: %d\n", a[i]);
		printf(" ");
	}
}
