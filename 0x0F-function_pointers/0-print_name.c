#include "function_pointers.h"

/**
 * print_name - prints name passed as argument
 * @name: name to be printed
 * @f: pointer to function
 * no return type
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
