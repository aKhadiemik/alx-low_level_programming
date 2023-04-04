#include "lists.h"

/**
 * listint_len - returns number of elements in list
 * @h: head of list
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
