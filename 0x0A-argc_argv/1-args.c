#include <stdio.h>

/**
 * main - entry point to print number of args
 * @argC: number of arguments in argV
 * @argV: arguments(strings) which are unused
 * Return: returns 0 on success
*/

int main(int argC, char *argV[] __attribute__((unused)))
{
	printf("%d\n", argC - 1);
	return (0);
}
