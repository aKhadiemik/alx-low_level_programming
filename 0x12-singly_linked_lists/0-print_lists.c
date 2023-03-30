#include "lists.h"

/**
 * print_list - prints all elements of list_t lists
 * @h: singly linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t elems = 0;

	while (h)
	{
	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("%d: %s\n", 0, "(nil)");
	h = h->next;
	elem++;
	}
	return (elems);
}
