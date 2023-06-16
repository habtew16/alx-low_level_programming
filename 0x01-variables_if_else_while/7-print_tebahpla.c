#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	int i;

	for(i = 0; i < 26; i++)
	{
		putchar('z' - i);
	}
	putchar('\n');
	return(0);
}
