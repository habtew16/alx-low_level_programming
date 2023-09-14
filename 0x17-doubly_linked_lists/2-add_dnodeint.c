#include "lists.h"

/**
 * add_dnodeint - function to add node at the begining
 * of the doubly linked list
 * @head: the head of the doubly linked list
 * @n: number to be added to the node
 * Return: the address of new nnode
 * added or NULL if failed
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));


	if (new_n == NULL)
	{
		return (NULL);
	}

	new_n->n  = n;
	new_n->prev = NULL;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	else
	{
		(*head)->prev = new_n;
		new_n->next = *head;
		*head = new_n;
		return (new_n);
	}
}
