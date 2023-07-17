#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free's memory
 * @d: user data
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
