#include "main.h"

/**
 * prinnt_square - entry point
 * prints #
 * @size: size of # to be printed
*/
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
