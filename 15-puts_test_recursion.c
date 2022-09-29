#include "main.h"

/**
 * help_print - prints a string
 * @sh: string to be printed
 * @i: iterating through string
 */
void help_print(char *sh, int i, int len)
{
	if (i < len)
	{
		_putchar(*(sh + i));
		help_print(sh, i + 1, len);
	}

	_putchar('\n');
}

/**
 * _puts_test_recursion - prints a string on the screen
 * @s: string to be printed
 */
void _puts_test_recursion(char *s, int len)
{
	int i;
	
	i = 0;
	help_print(s, i, len);
}
