#include "main.h"

/**
 * is_prime - finds if a number is prime or not
 * @i: is numbers to find modulus
 * @n: is target number
 * Return: 0 if not prime
 * 1 if prime
*/

int is_prime(int i, int n)
{
	if (n % i == 0 && n != i)
	{
		return (0);
	}

	if (n % i != 0 && i < n)
	{
		return (is_prime(i + 1, n));
	}

	return (1);
}

/**
 * is_prime_number - determines if number is prime by
 * helper is_prime
 * @n: number
 * Return: returns 0 if not and 1 if is
*/

int is_prime_number(int n)
{
	int i;

	i = 2;

	if (n < 2)
	{
		return (0);
	}

	return ((is_prime(i, n)));
}
