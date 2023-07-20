#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints passed strings to func
 * @separator: string that separates two string
 * @n: number of strings
 * no return
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			str =  va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
		}
		printf("\n");
	}
}
