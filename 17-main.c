#include <stdio.h>

/**
 * argc && argv
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;

	printf("This program was called with: %s\n", argv[0]);
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
			printf("\nargv[i]: %s\n", argv[i]);
	}
	else
		printf("There were no further arguments!");
}
