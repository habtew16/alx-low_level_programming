#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array in range of given nnumbers
 * inncluding both upper and lower limits
 * @min: lower limit
 * @max: upper limit
 * Return: returns ptr if succes else
 * null is returned
*/

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc(sizeof(int *) * (max - min + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}
