#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - function to print elements of lists
 * @h: head of the list
 * Return: returns the count of the list
*/


size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

