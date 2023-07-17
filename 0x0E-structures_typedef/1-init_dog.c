#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to print charachter of dog
 * @d: address of the dog properties
 * @name: name of the dog
 * @owner: the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}


