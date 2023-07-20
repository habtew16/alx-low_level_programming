#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers passed
 * @separator: is string that separates two number
 * @n: number of arguments passed
 * no return
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(args, int));
		printf("\n");
	}

	va_end(args);
}
