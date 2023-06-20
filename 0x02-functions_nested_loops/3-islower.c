#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if the letter is lower
 * @c: input paramater
 * Return: 1 if true
 * 0 if false
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
