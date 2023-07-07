#include "main.h"

/**
 * _strncpy - funnction to copy one string in to destination
 * @dest: destination pointer
 * @src: source string
 * @n: number of strings
 * Return: new copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
