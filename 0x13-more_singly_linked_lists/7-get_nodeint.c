#include "lists.h"

/**
 * get_nodeint_at_index - finds node in a list
 * @head: beginning of list
 * @index: index of node
 *
 * Return: selected node, if no node in list - NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head; x++)
		head = head->next;

	if (x < index)
		return (NULL);

	return (head);
}

