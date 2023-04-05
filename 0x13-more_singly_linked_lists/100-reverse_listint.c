#include "lists.h"

/**
 * reverse_listint - reverses list
 * @head: beginning of list
 *
 * Return: pointer to beginning of list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = NULL, *y = NULL;

	while (*head)
	{
		y = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = y;
	}

	*head = x;
	return (*head);
}
