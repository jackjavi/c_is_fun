#include <stdio.h>
#include <unistd.h>

/**
 * main - Execve
 * @ac: Number of command line arguments
 * @av: Pointer to arrray of command line args
 */
int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("Usage: <%s]>\n", av[0]);
	}
	execve(av[1], av, NULL);

	return (0);
}
