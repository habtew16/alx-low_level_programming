#include "main.h"
#include <unistd.h>

/**
 * _putchar - used to print one char at a time
 * @c: is variable used to to pass characters
 * Return: 1 on success
 * -1 on failor
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
