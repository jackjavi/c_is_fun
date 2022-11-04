#include "main.h"

/**
 * CharReadWrite - Reads the contents of fptr2, and
 * writes to fptr1.
 * @fptr1: file to be written
 * @fptr2: file to be read
 */
void CharReadWrite(FILE *fin, FILE *fout)
{
	int c;

	while ((c = fgetc(fin)) != EOF)
	{
		fputc(c, fout); /* write to a file */
		putchar(c); /* put the character to the screen */
	}
}
