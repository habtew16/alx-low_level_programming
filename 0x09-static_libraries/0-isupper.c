#include "main.h"

/**
 * _isupper - entry point
 * determine if the letter is upper case or not
 * @c: character
 * Return: 1 if upper and 0 if lower case
*/
int _isupper(int c)
{
	if  (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
