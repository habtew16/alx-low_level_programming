#include "main.h"

/**
 * _pow_recursion - prints power of a given number
 * to a given exponent
 * @x: base number
 * @y: exponennt
 * Return: -1 if y < 0 to show error
 * 1 if 0 any number to power 0 is 1
 * power of number else
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
