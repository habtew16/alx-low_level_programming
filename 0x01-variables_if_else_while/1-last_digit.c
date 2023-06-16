#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{
        int n;
	int lastD;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

	lastD = n % 10;

	if (n > 5)
        {
                printf("%i and is greater than 5\n", lastD);
        }
        else if (n < 6 && n != 0)
        {
                printf("%i and is less than 6 and not 0\n", lastD);
        }
        else if(n ==0)
        {
                printf("%i and is 0", lastD);
        }
        return (0);
}
