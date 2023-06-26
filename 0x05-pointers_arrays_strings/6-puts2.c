#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - entry point for printing even place
 * strings
 * @str: stringparameter
*/
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
