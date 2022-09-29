#include "main.h"
#include <stdio.h>

/**
 * main - runs other functions
 *
 *Return: Always 0.
 */
int main(void)
{
	int len;
	char *s = "Let me photograph you";

	len = _strlen(s);
	_puts_test_recursion(s, len);

	return (0);
}
