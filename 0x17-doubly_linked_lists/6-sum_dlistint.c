#include "lists.h"

/**
 * sum_dlistint - function to add elemennts in doubly
 * linked list
 * @head: the head of the doubly linked list
 * Return: 0 if none and sum if items exist
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
