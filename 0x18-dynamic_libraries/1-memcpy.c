#include "main.h"

/**
 * _memcpy - function to copy memeroy area from srcc to dest
 * @dest: destination memory area
 * @src: source memory area
 * @n: size of src
 * Return: returns new dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
