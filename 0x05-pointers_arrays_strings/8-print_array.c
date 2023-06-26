#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point to print array
 * @a: array of numbers
 * @n: size of the given array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
