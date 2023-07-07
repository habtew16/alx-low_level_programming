#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 * @argC: length of arguments
 * @argV: argv is collection of arguments
 * Return: 0 if success
 * 1 if fails
 */

int main(int argC, char  *argV[])
{
	int num;
	int result;

	if (argC != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argV[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	while (num > 0)
		{
		if (num % 25 == 0)
		{
			num -= 25;
		} else if (num % 10 == 0)
		{
			num -= 10;
		} else if (num % 5 == 0)
		{
			num -= 5;
		} else if (num % 2 == 0)
		{
			num -= 2;
		} else
		{
			num--;
		}
		result++;
	}

	printf("%d\n", result);
	return (0);
}
