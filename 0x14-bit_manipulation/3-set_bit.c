#include "main.h"
#include "2-get_bit.c"

/**
 * set_bit -function to set bit at index
 * @n: number to converted to bit
 * @index: index to be searched
 * Return: -1 if the operation is  not successful
 * 1 if succeful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) |= 1 << index;
	if (get_bit((*n), index) == 1)
		return (1);
	return (-1);
}
