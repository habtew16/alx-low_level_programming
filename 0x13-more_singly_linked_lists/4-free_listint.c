#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - functionn to memeory set by linnked lists
 * @head: the head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
