#include <unistd.h>
#include "variadic_functions.h"

/**
 * _putchar - function to write character to console
 * @c: character to be written
 * Return: returns 1 if success
 * -1 if fails
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}
