#include "main.h"

/**
 * get_bit - function to get bit at index specified
 * @n: nunmber to be connverted to binary
 * @index: index to search
 * Return: -1 if not fond or out of range
 * else the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);

	return (n >> index & 1);
}
