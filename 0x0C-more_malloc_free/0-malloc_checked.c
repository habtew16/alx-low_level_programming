#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry point to assign memory
 * addrees
 * @b: size of memeroy address
 * Return: returns void
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
