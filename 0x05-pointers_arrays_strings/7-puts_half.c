#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - entry poinnt for printing half of string
 * @str: string (full)
 * from which half is printed
 * no return
*/

void puts_half(char *str)
{
	int size;
	int i;
	int n;

	size = _strlen(str);
	if (size % 2 == 0)
	{
		n = size / 2;
	}
	else
	{
		n = ((size - 1) / 2);
		n = size - n;
	}

	for (i = n; i <= size - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
