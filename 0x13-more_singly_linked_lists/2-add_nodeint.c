#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function to add node at the beginning
 * @head: the head of the pointer
 * @n: data to be added
 * Return: null if fails
 * else address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
