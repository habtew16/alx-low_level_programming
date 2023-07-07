#include "main.h"

/**
 * _strlen  - _strlen functon to get length of string
 * @s: string to calculate it's length
 * Return: returns the length of string
*/

int _strlen(char *s)
{
		int count;

	count = 0;
	if (*s == '\0')
	{
		return (count);
	}
	else
	{
		count = 1;

		return ((count + _strlen(s + 1)));
	}
}
