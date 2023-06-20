#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if the input is alphabet
 * @c: input paramater
 * Return: 1 if true
 * 0 if false
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
