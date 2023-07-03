#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of both diagonals
 * @a: asquare matrix
 * @size: size of a
 * no return
*/
void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%i,%i ", sum1, sum2);
}
