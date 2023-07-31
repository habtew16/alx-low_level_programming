#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - function to pop the first
 * element of the list
 * @head: head of the list
 * Return: returns the popped element
 */

int pop_listint(listint_t **head)
{
	int popped;
	listint_t *current;

	current = *head;

	popped = current->n;
	current = current->next;
	free(*head);
	*head = current;

	return (popped);
}
