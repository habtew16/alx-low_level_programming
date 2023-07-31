#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees memory and sets head to null
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	current = *head;

	while (current != NULL)
	{
		temp =  current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
}
