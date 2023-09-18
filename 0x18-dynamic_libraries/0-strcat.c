#include "main.h"

#include <string.h>
/**
 * _strcat - function name to copy one file into other
 * @dest: first string
 * @src: second string to be coppied
 * Return: dest string which new and modified continain
 * second strong
*/
char *_strcat(char *dest, char *src)
{
	int destLen;
	int srcLen;
	int i;

	destLen = strlen(dest);
	srcLen = strlen(src);

	for (i = 0; i < srcLen; i++)
	{
		dest[destLen + i] = src[i];
	}

	return (dest);
}
