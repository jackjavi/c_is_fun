#include <stdio.h>

/**
 * fun - A normal function with an int parameter
 * and void return type
 * @a: integer to be printed
 */
void fun(int a)
{
	printf("Value of a is %d\n", a);
}

/**
 * main - contains a function pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	/**
	 * funt_ptr - a pointer to function fun()
	 */
	void (*fun_ptr)(int) = &fun;

	/**
	 * The above line is equivalent of the following two
	 * void (*fun_ptr)(int);
	 * fun_ptr = &fun;
	 */

	/**
	 * Invoking using a function pointer
	 */
	(*fun_ptr)(10);

	return (0);
}
