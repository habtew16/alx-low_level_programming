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
	for (i = size_str - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

