#include "main.h"
#include <string.h>

/**
 * string_toupper - function which converts letter tp upper case
 * @src: source string
 * Return: returns updateds tring
*/

char *string_toupper(char *src)
{
	int i;
	int srcLen;

	srcLen = strlen(src);

	for (i = 0; i < srcLen; i++)
	{
		if (src[i] >= 'a' && src[i] <= 'z')
		{
			src[i] = src[i] - 32;
		}
	}
	return (src);
}
