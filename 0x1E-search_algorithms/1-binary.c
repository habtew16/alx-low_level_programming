#include "search_algos.h"

/**
 * binary_search - function to search value
 * in array using binary search algorithm
 * @array: the header pointer of the array
 * @size: the length of the array
 * @value: value to be searched
 * Return: returns value if found or -1
 * if value doesn't exist or empty arr
 */


int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t i;
	size_t l = 0;
	size_t r = size - 1;

	if (array != NULL)
	{
		while (l <= r)
		{
			printf("Searching in array: ");
			for (i = l; i <= r; i++)
			{
				printf("%d", array[i]);
				if (i != r)
					printf(", ");
			}
			printf("\n");
			mid = ceil((l + r) / 2);
			if (array[mid] > value)
			{
				r = mid - 1;
			}
			else if (array[mid] < value)
			{
				l = mid + 1;
			}
			else
			{
				return (mid);
			}
		}
		return (-1);
	}
	else
	{
		return (-1);
	}
}

