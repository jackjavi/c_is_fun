#include <stdio.h>
#include <stdlib.h>

/**
 * main - getline
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t n;
	char *buffer = malloc(sizeof(n));

	printf("$ ");
	getline(&buffer, &n, stdin);

	printf("%s\n", buffer);

	return (0);
}
