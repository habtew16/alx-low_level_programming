#include "main.h"
#include <string.h>

/**
 * print_rev - entry point to print reverse of string
 * @s: strinng to be reversed
 * no return
*/

void print_rev(char *s)
{
	int size_str;
	int i;

	size_str = strlen(s);
	if (size_str <= 0)
	{
		_putchar('\n');
	}
	for (i = size_str; i >= 0; i--)
	{
		_putchar(s[i]);
		if (i == 0)
		{
		_putchar('\n');
		}
	}
}

