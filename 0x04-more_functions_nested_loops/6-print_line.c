#include "main.h"

/**
 * print_line -enntry poiunt
 * @n: count of _
*/
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
