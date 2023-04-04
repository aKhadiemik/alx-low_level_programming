#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
