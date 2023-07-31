#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function to add node at the end
 * @head: head of the node
 * @n: data to be added
 * Return: returns new node address or
 * null if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current  = current->next;
		}
		current->next = new_node;
		return (new_node);
	}
}
