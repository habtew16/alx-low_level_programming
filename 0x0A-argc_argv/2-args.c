#include <stdio.h>

/**
 * main - entry point to print all args
 * @argC: number of args
 * @argV: total args
 * Return: returns 0 on success
*/

int main(int argC, char **argV)
{
	int i;

	for (i = 0; i < argC; i++)
	{
		printf("%s\n", argV[i]);
	}

	return (0);
}
