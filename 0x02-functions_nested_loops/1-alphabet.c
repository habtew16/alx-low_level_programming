#include "main.h"
/**
 * print_alphabet - prints alphabet from a-z
 *
 * Return: 0 success
*/
void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}
