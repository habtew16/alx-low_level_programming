#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function to add elements in linnked
 * list
 * @head: the head of the linked list
 * Return: returns sum of numbers or 0
*/


int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
