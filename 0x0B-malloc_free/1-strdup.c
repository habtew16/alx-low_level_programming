#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - function to return add of  string if exists
 * @str: string to be printed
 * Return: returns the address of string if exists
 * or null if doesn't
*/

char *_strdup(char *str)
{
	char *ptr;
	int i;

	ptr = malloc(strlen(str) + 1);

	if (ptr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
