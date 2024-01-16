#include "search_algos.h"



int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t start = 0;
	size_t end = sqrt(size);

	while (start < end && array[end - 1] < value)
	{
		printf("Value checked array[%ld] = [%ld]\n", start, start);
		start = end;
		end += sqrt(size);
		if (end > size)
			end = size;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < end; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
