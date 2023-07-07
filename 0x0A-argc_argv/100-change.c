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
	int coins;
	int money;

	coins = 0;

	if (argC == 2)
	{

		if (atoi(argV[1]) < 0)
		{
			printf("%d\n", 0);
			return (1);
		}

		money = atoi(argV[argC - 1]);

		while (money > 0)
		{
			if (money % 25 == 0)
			{
				money -= 25;
			} else if (money % 10 == 0)
			{
				money -= 10;
			} else if (money % 5 == 0)
			{
				money -= 5;
			} else if (money % 2 == 0)
			{
				money -= 2;
			} else
			{
				money--;
			}
			coins++;
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("Error\n");
	return (1);
}
