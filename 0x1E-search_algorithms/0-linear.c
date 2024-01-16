#include "search_algos.h"

/**
 * linear_search - function to search value
 * in array using linear search algorithm
 * @array: the header pointer of the array
 * @size: the length of the array
 * @value: value to be searched
 * Return: returns value if found or -1
 * if value doesn't exist or empty arr
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}
