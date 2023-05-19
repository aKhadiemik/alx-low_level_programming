#include "lists.h"

/**
 * sum_dlistint - adds sum of all data in linked list
 *
 * @head: beginning of linked list
 *
 * Return: sum of linked list data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
