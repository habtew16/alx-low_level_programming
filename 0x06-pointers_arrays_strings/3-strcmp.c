#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: s1 first string
 * @s2: string two
 * Return: 0 if two strings are equla
 * 1 if first is greater
 * -1 if second is greator
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *) s1 - *(unsigned char *) s2);
}
