#include "main.h"
#include "2-get_bit.c"


/**
 * clear_bit - function used to clears index to 0
 * @n: number to be connverted to binnary
 * @index: index to go
 * Return: integer val
 */



int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	(*n) &= ~(1 << index);

	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
