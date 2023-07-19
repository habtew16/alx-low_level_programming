#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function to find index of number in array
 * if exists
 * @array: array of numbers
 * @size: size f the array
 * @cmp: function that compares and returns integer
 * Return: returns index if sucess
 * -1 if not found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}

