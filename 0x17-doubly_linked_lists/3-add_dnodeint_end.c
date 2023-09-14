#include "lists.h"

/**
 * add_dnodeint_end - function to add item to the end of the
 * doubly linked list
 * @head: head of the nnode
 * @n: element to be added
 * Return: nnew nnode or NNULL if memory allocation failed
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	current = *head;
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next)
	{
		current = current->next;
	}
	new->prev = current;
	current->next = new;
	return (new);
}
