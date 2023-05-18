#include "lists.h"

/**
 * dlistint_len - fn returns no. of elements in doubly linked list
 *
 * @h: doubly linked list
 *
 * Return: no. of elements in dobuly linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
