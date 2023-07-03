#include "main.h"

/**
 * _strchr - function to compare str
 * @s: source string
 * @c: character to be compared
 * Return: returns result from comparison
*/
char *_strchr(char *s, char c)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	{
		if (s[size] == c)
		{
			return (s + size);
		}
	}

	return (0);
}
