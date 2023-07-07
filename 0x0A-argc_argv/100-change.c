#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calc_money(int money, int coins);

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
	int result;

	coins = 0;

	if (argC != 2)
	{
		printf("Error\n");
		return (1);
	}

	else
	{

		if (atoi(argV[1]) < 0)
		{
			printf("0\n");
			return (1);
		}
		else
		{
			money = atoi(argV[1]);

			result = calc_money(money, coins);

			printf("%d\n", result);
			return (0);
		}
	}
	return (0);
}

/**
 * calc_money -calculates changes
 * @money: money assed as argument
 * @coins: calculated conis
 * Return: returns coins
*/


int calc_money(int money, int coins)
{
	while (money > 0)
	{
		if (money % 25 == 0)
		{
			money -= 25;
		}
		else if (money % 10 == 0)
		{
			money -= 10;
		}
		else if (money % 5 == 0)
		{
			money -= 5;
		}
		else if (money % 2 == 0)
		{
			money -= 2;
		}
		else
		{
			money--;
		}
		coins++;
	}
	return (coins);
}
