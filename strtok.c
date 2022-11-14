#include <stdio.h>
#include <string.h>

/**
 * main - strtok (Extract tokens from strings).
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "C language is the best";
	char *delim = " ";
	char *token;

	token = strtok(str, delim);
	while(token)
	{
		printf("%s", token);
		token = strtok(NULL, delim);
		printf("\n");
	}

	return (0);
}
