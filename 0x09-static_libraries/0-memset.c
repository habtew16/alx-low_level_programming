#include "main.h"

/**
 * _memset - entry point to set a memory
 * @s: pointer of str
 * @b: character to be filled in memory
 * @n: length of memory
 * Return: return s after setting
 * first n memory
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
