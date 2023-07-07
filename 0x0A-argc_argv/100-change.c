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
	int j;
	int coins[5];
	int num;
	int result;

	coins[5] = {25, 10, 5, 2, 1};

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

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
