#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - entry point to convert string to integer
 * @s: strinng to be converted to number
 * Return: return integer if string conntians integer
 * or return 0 if string doesn't contain any number
 */
int _atoi(char *s)
{
	int i;
	int np;
	int c;
	int d;
	int num;

	np = 0;
	d = 1;
	num = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && c > 0)
			break;
		if (s[i] == '-')
			np--;
		if (s[i] == '+')
			np++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			c++;
		}
	}
	while (c > 0)
	{
		num = num + ((s[i - 1] - '0') * d);
		i = i - 1;
		c = c - 1;
		d = d * 10;
	}
	if (np >= 0)
	{
		num = num * 1;
	} else
	{
		num = num - 1;
	}
	return (num);
}
