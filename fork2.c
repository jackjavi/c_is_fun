#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - fork and zombie state
 * 
 * Return: Always 0.
 */
int main()
{
	pid_t id = fork();

	if (id == -1)
	{
		perror("Error");
		exit(1);
	}
	if (id == 0)
	{
		sleep(30);
		printf("I am the child process\n");
		printf("My pid is : %u\n", getpid());
	}
	else
	{
		printf("I am the parent process\n");
		printf("My ppid is : %u\n", getppid());
	}

	return (0);
}
