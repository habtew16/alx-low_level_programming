#include "main.h"
#include <string.h>

/**
 * _puts - entry point to print string of characters
 * @str: strinng to be printed
 * no return type
*/

void _puts(char *str)
{
	int size_str;
	int i;

	size_str = strlen(str);
	for (i = 0; i < size_str; i++)
	{
		_putchar(str[i]);
		if (i + 1 == size_str)
		{
			_putchar('\n');
		}
	}
}
