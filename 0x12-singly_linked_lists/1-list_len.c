#include "lists.h"

/**
 * list_len - determines number of elements of in list
 * @h: singly linked list
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t nodes_n = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes_n++;
	}
	return (nodes_n);
}
