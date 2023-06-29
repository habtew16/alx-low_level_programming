#include "main.h"
#include <stdio.h>
#include "_putchar.c"

/**
 * reverse_array - function to reverse array
 * @a: array of numbers
 * @n: length of array
 * no return
*/
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}

		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
