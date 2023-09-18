#include "main.h"


/**
 * *_strcpy - entry point to copy one string to other
 * @dest: variable to copy string to
 * @src: source strinng to copy to dest
 * Return: return new copied strin
*/
char *_strcpy(char *dest, char *src)
{
	int i;
	int size;

	size = _strlen(src);
	for (i = 0; i <= size; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
