#include <stdio.h>
int print(int jb);

/**
 * print - prints jb;
 */
int print(int jb)
{
	if (jb < 0)
		return (0);
	printf("%d", jb + print(jb - 1));
	jb--;
	return jb;
}

/**
 * main - call other functions
 *
 * Return: Always 0.
 */
int main(void)
{
	int jb;

	jb = 4;
	print(jb);
	printf("\n");
	return (0);
}
