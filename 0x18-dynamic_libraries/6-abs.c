#include "main.h"

/**
 * _abs - entry point
 * @n: number input
 * Return: n if n is positive
 * -n if n is negative
*/
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
