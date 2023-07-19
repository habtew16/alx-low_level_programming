#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * op_add - to add two numbers
 * @a: first number
 * @b: second number
 * Return: returns result
*/

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - functin to substract a number from
 * another number
 * @a: first number to be substracted
 * @b: second number
 * Return: returns result
*/


int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - function to multiply two numbers
 * @a: first multipland
 * @b: second maltipland
 * Return: returns result
*/


int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - function to divide first number to second number
 * @a: numinator number
 * @b: denoinator number
 * Return: returns result
*/


int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - function to find modulos of numbers
 * @a: first number
 * @b: second number
 * Return: modulo of ints
 */

int op_mod(int a, int b)
{
	return (a % b);
}
