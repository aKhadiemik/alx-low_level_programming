#include "lists.h"

/**
 * get_dnodeint_at_index - returns specific node of linked list
 *
 * @head: beginning of node
 * @index: index for node to return
 *
 * Return: node at chosen index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}

	return (current);
}
