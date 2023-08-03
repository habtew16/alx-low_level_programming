#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function to convert binnray yo int
 * @b: binnary string
 * Return: returns unsigned long int equivalent to
 * binnray givenn
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num <<= 1;
		else
			return (0);
		b++;
	}
	return (num);
}
