#include "main.h"
#include <stdlib.h>

/**
 * binary_to_unit - function to convert binnray yo int
 * @b: binnary string
 * Return: returns unsigned long int equivalent to
 * binnray givenn
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	
	num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);

		num <<= 1;

		num += (*b - '0');
		b++;
	}

	return (num);
}
