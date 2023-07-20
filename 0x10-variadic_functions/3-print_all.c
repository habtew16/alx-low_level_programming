#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - to print all the arguments passed in function
 * @format: string that contains identifying formats to print
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str;
	char *separator;
	va_list list;

	i = 0;
	separator = "";
	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}

