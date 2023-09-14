#include "lists.h"

/**
 * dlistint_len - function to return the length of the
 * elements inn doubl linnked list
 * @h: head of the list
 * Return: returns the len of elemennts
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
