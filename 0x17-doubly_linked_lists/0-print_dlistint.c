#include "lists.h"

/**
 * print_dlistint - function to print doubly linked list
 * @h: is the head of the doubly linked list
 * Return: returns the count of the elements in the list
 */


size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	int count = 0;

	current = h;

	if (h == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return (count);
}
