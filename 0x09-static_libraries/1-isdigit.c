#include "main.h"

#include <ctype.h>
/**
 * _isdigit - entry poinnt
 * checks if the input is digit or not
 * @c: input digit
 * Return: 1 if true 0 if false
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
