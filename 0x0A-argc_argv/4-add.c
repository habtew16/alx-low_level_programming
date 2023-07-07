#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point for functions
 * @argC: length for argV
 * @argV: collection of arguments
 * Return: 0 if success
 * 1 not success
*/

int main(int argC, char *argV[])
{
	int i;
	int sum;

	sum = 0;
	if (argC == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	else
	{
		for (i = 1; i < argC; i++)
		{
			if (isdigit(*argV[i]))
			{
				sum += atoi(argV[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
