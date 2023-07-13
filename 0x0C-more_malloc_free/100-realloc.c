#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates memory address
 * @ptr: original pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Retrun: returns address
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int copy_size, i;
	char *old_ptr;
	char *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	if (ptr)
	{
		copy_size = (old_size < new_size) ? old_size : new_size;
		old_ptr = ptr;
		new_ptr = ptr1;

		for (i = 0; i < copy_size; i++)
			new_ptr[i] = old_ptr[i];

		free(ptr);
	}

	return (ptr1);
}

