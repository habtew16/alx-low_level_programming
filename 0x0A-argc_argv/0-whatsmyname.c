
#include <stdio.h>

/**
 * main - entry point
 * @argc:  unused variable which is length of argv
 * @argV: array of strings
 * Return: 0 on success
*/
int main(int argC __attribute__((unused)), char *argV[])
{
	printf("%s\n", argV[0]);
	return (0);
}
