#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


/**
 * main - fork and wait.
 *
 * Return: Always 0.
 */
int main(void)
{
	int id = fork();
	int n, i;

	if (id == 0)
		n = 1;
	else
		n = 6;

	if (id != 0)
	{
		wait(&id);
	}
	for (i = n; i < n + 5; i++)
	{
		printf("%d\t", i);
	}

	if (id != 0)
		printf("\n");

	return (0);
}
