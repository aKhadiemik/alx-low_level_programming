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

	while (h != NULL)
	{
	if (h->str == NULL)
		printf("%d: %s\n", 0, "(nil)");
	else
		printf("%d: %s\n", h->len, h->str);
	h = h->next;
	elem++;
	}
	return (elems);
}
