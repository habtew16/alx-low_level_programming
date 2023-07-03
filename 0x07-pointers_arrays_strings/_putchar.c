#include "main.h"
#include <unistd.h>

/**
 * _putchar - entry point to print chaacters
 * @c: variable c
 * Return: returns 1 if success and
 * 0 if fails
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
