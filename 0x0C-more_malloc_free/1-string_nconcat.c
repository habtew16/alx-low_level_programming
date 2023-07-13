#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first srting
 * @s2: second string
 * @n: size of string two if n < strlen(s2)
 * Return: returns address to nw string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1, len_s2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s2 = strlen(s2);
	len_s1 = 0;

	if (n >= len_s2)
	{
		n = len_s2;
	}
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] !=  '\0'; i++)
	{
		ptr[i] = s1[i];
		len_s1++;
	}
	for (i = 0; i < n; i++)
		ptr[i + len_s1] = s2[i];
	ptr[i + len_s1] = '\0';
	return (ptr);
}
