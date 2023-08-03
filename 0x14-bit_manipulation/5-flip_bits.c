#include "main.h"


/**
 * flip_bits - funnction to flip bits
 * @n: first num
 * @m: second num
 * Return: unsigned int value of num
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips, count = 0;

	flips = n ^ m;
	while (flips > 0)
	{
		count += flips & 1;
		flips >>= 1;
	}
	return (count);
}
