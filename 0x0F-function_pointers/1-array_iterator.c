#include "function_pointers.h"

/**
 * array_iterator - function to iterate over aray and
 * print eleents of array
 * @size: size of an array
 * @action: pointer to function which prints int
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
