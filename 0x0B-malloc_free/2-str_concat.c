#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns ptr t concat strin
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *ptr;

	j = strlen(s1);
	ptr = malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = j; s2[i] != '\0'; i++)
		ptr[i] = s2[i];

	return (ptr);
}
