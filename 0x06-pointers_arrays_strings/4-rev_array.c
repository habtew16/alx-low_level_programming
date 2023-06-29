#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: array of numbers
 * @n: length of array
 * no return
*/
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
