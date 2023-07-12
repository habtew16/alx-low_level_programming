#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to print args
 * @ac:  number of arguments
 * @av: arguments
 * Return: rutrns address
*/

char *argstostr(int ac, char **av)
{
	int len;
	int i;
	int j;
	int k;
	char *ptr;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}

	len += (ac + 1);

	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}

	ptr[k] = '\0';

	return (ptr);
}
