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
	int len1;
	int len2;
	char *ptr;

	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <  len1;  i++)
		ptr[i] = s1[i];

	for (i = 0; i <  len2; i++)
		ptr[i + len1] = s2[i];

	ptr[i + len1] = '\0';
	return (ptr);
}
