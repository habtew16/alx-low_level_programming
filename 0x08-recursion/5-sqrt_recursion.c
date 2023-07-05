#include "main.h"

/**
* helper -function helps to  decide
* if natural sqrt or nt
* @i: number to calculate close square
* @n: number to goet root
* Return: value of root
*/
int helper(int i, int n)
{
	if (i * i > n)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (helper(i + 1, n));
}
/**
* _sqrt_recursion - function which  returns square root
* @n: number to return square root
* Return: returns int of squareroot
*/
int _sqrt_recursion(int n)
{
return (helper(0, n));

}
