#include "lists.h"


/**
 * free_dlistint - funnction to free doubly linked list
 * @head: head of the function
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current	= head;

	while (current != NULL)
	{
		free(current);
		current = current->next;
	}
}
