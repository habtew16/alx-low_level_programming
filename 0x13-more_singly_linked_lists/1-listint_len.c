#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - functionn to return count of elements
 * in list
 * @h: head of the list
 * Return: returns the number of items in list
 */

size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

