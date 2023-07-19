#include <unistd.h>
#include "function_pointers.h"

/**
 * _putchar - funciton to write character to console
 * @c: character variable
 * Return: retirns 1 if success or 1
 * if fails
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
