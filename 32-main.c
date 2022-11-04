#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - opens files to be read and
 * written. 
 * calls ReadWrite func.
 * @argc - number of command line arguements.
 * @argv: Array of command line arguements.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	FILE *fptr1, *fptr2;

	if ((fptr1 = fopen(argv[1], "w")) == NULL)
	{
		printf("Cannot open %s.\n", argv[1]);
		exit(1);
	}
	else if ((fptr2 = fopen(argv[2], "r")) == NULL)
	{
		printf("Cannot open %s.\n", argv[2]);
		exit(1);
	}
	else 
	{
		CharReadWrite(fptr2, fptr1);
		fclose(fptr1);
		fclose(fptr2);
	}

	return (0);
}
