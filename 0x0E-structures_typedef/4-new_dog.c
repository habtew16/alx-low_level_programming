#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function to find string length
 * @str: string where length is to be found
 * Return: returns lengt
*/

size_t _strlen(const char *str)
{
	const char *end = str;

	while (*end)
		++end;
	return (end - str);
}

/**
 * _strcpy - copies string
 * @dest: destination for string
 * @src: source string
*/

void _strcpy(char *dest, const char *src)
{
	while ((*dest++ = *src++))
		;
}


/**
 * new_dog - struct function to create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: returns new dog if no error else null
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len = _strlen(name);
	size_t owner_len = _strlen(owner);

	dog_t *ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	ndog->name = malloc((name_len + 1) * sizeof(char));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->name, name);

	ndog->age = age;

	ndog->owner = malloc((owner_len + 1) * sizeof(char));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	_strcpy(ndog->owner, owner);

	return (ndog);
}

