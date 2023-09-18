#include "main.h"
#include <stdlib.h>

/**
* _atoi - entry point to convert string to integer
* @s: strinng to be converted to number
* Return: return integer if string conntians integer
* or return 0 if string doesn't contain any number
*/

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}


	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
