#include "main.h"
#include <stdio.h>

/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int nb;
	int nb1;
	int nb2;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb1 = _atoi("         +      +    -    -98 Battery Street; ");
	nb2 = _atoi("San Francisco, CA 94111 - USA             ");
	nb = nb1 + nb2;
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
