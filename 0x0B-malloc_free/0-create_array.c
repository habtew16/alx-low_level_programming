#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of size by using malloc
 * @size: size of the array
 * @c: character to be filled in array
 * Return: NULL if no value
 * ptr if there is value
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}

	return (ptr);
}
