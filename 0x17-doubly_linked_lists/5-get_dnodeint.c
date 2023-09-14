#include "lists.h"

/**
 * get_dnodeint_at_index - function to get nnode
 * at given index
 * @head: the head of the doubly linked list
 * @index: index of the nnode
 * Return: null if failed or the nnode if found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int idx = 0;

	current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (idx == index)
			return (current);
		idx++;
		current = current->next;
	}

	return (NULL);
}
