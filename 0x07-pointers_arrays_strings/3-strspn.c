#include "main.h"
#include <stdbool.h>


/**
 * _strspn - function to return bytes of matching strs
 * @s: source string
 * @accept: characters to be checked
 * Return: returns the length bytes
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned int length;
	bool found;
	unsigned int i;

	length = 0;

	while (*s)
	{
		found = false;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = true;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		length++;
		s++;
	}
	return (length);
}
