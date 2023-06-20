#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - entry point
 * @num: number
 * Return: last digit of num
*/
int print_last_digit(int num)
{
	int lastD;

	lastD = abs(num % 10);
	_putchar('0' + lastD);
	return (lastD);
}
