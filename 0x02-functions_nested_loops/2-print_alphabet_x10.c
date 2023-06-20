#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabtes 10 time
 *
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar('a' + j);
		}
		i++;
		_putchar('\n');
	}
}
