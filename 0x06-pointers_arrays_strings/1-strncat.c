#include "main.h"
#include <string.h>

/**
 * _strncat - function to copy strings
 * @dest: destination string
 * @src: source sring to be copied
 * @n: lenngth  of string to be copied
 * Return: returns new dest string
*/

char *_strncat(char *dest, char *src, int n)
{
	int destLen;
	int i;

	destLen = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destLen + i] = src[i];
		dest[destLen + i] = '\0';
	}

	return (dest);
}
