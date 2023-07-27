#include "list.h"
#include <unistd.h>


/**
 * _putchar --function to print character to std output
 * @c: character
 * Return: returns 1 in success
 * and -1 if failed
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
