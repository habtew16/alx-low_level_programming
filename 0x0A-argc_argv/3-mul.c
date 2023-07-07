#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to multiply
 * @argC: number of args
 * @argV: arguments
 * Return: 0 if sucess
 * 1 if not
*/

int main(int argC, char *argV[])
{
	int prod;

	if (argC != 3)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argV[1]) * atoi(argV[2]);
	printf("%d\n", prod);
	return (0);
}
