#include "main.h"

/**
 * swap_int - entry point for swap
 * @a: first variable to be changed
 * @b: seccond variable to bee swaped
 * no return
*/

void swap_int(int *a, int *b)
{
	int temp_var;

	temp_var = *a;
	*a = *b;
	*b = temp_var;
}
