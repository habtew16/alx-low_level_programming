#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char mesg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, mesg, sizeof(mesg)-1);
	return (0);
}
