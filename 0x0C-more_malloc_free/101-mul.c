#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * _is_number - function to check if passed is number
 * @s: character from argument value
 * Return: 0 if nont and 1 if is
 */

int _is_number(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * _multiply_nunmbers - main function
 * @num1: first number
 * @num2: second number
 * Return: multiplication
 */

int _multiply_numbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 * Return: always 0
 */

int main(int argc, char  *argv[])
{
	int mul;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if(!_is_number(arv[1]) || !_is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	mul = _multiply_numbers(atoi(argv[1]), atoi(argv[2]));
	printf("%d\n", mul);
	return (0);
}
