#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments passed
 * Return: return result if successufl
 * 98 and exit if fails
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int num1;
		int num2;
		int (*func)(int, int);

		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		func = get_op_func(argv[2]);
		if ((*argv[2] == '%' || *argv[2] == '/') && num2 == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(num1, num2));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
