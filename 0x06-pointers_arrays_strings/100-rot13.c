#include "main.h"

/**
 * rot13 - function to encode
 * @str: string to be encoded
 * Return: str is returned after rot13
*/

char *rot13(char *str)
{
	char part1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char part2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j;


	for (i = 0; str[i] != '\0'; i++)
	{

		for (j = 0; part1[j] != '\0'; j++)
		{
			if (str[i] == part1[j])
			{
				str[i] = part2[j];
				break;
			}
		}
	}
	return (str);
}
