#include <unistd.h>
#include "lists.h"


/**
 * _putchar - function to print char to std
 * @c: character to be printed
 * Return: returns 1 in success and -1
 * if fails
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
