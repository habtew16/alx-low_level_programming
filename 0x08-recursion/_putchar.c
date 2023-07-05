#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print single char
 * @c: single char to be printed
 * Return: returns 1 on sucesss
 * 0 if fails
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
