#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _calloc - entry function
 * @nmemb: members of array
 * @size: size of the array
 * Return: returnns pointer to array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nnmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}

