#include "main.h"

/**
 * _strpbrk - function to search for string
 * @s: string of characters
 * @accept: string to be searched
 * Return: returns 0 in sucess
*/


char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
