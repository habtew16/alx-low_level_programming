#include "main.h"

/**
 * leet - function nname to remove letters
 * @str: string to be changed
 * Return: returns changed string str
*/

char *leet(char *str)
{
	int i;
	int j;

	char num[] = "a4A4e3E3o0O0t7T7l1L1";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; num[j] != '\0'; j++)
		{
			if (str[i] == num[j])
			{
				str[i] = num[j + 1];
				break;
			}
		}
	}
	return (str);
}
