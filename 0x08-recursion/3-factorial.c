#include "main.h"

/**
 * factorial - fanction to find factorial of number
 * @n: number fatorial to be found
 * Return: -1 if negative to show error
 * 1 if 0 0! = 1
 * else factorial of number
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
