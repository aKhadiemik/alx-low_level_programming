#include "lists.h"

/**
 * sum_listint - determines sum of elements in list
 * @head: beginning of list
 *
 * Return: sum of elements
 */

int sum_listint(listint_t *head)
{
	int total;

	total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
