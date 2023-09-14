#include "lists.h"



/**
 * delete_dnodeint_at_index - funcntion to deletes node from
 * doubly linked list
 * @head: the head of the doubly linked list
 * @index: index from which item is going to be deleted
 * Return: 1 on success and -1 if nnnont
 */



int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int dex = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	tmp = *head;
	while (tmp->next && dex != index)
	{
		dex++;
		tmp = tmp->next;
	}
	if (dex == index)
	{
		if (tmp->next != NULL)
		{
			tmp->next->prev = tmp->prev;
			tmp->prev->next = tmp->next;
			free(tmp);
		}
		else
		{
			tmp->prev->next = NULL;
			free(tmp);
		}
		return (1);
	}
	return (-1);
}
