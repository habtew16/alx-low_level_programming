#include "main.h"


/**
 * print_binary - prints binray nnumber from unnit
 * @n: unsinged long int to be converted to binnary
 */

void print_binary(unsigned long int n)
{
	int found_one = 0;
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			found_one = 1;
			_putchar('1');
		}
		else if (found_one)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
