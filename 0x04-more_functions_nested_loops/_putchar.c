#include <unistd.h>

/**
 * _putchar -entry poinnt to prinnt characters
 *
 * Return: 1 on success
 * -1 on failor
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
