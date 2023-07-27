#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * list_len - function to find the length of passed list
 * @h: the header nnode for the list
 * Return: returns the length of the list
 */

size_t list_len(const list_t *h)
{
	int len;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
