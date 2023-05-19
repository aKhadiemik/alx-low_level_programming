#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at specified index
 *
 * @head: beginning of linked list
 * @index: chosen index for operation
 *
 * Return: if success 1, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *node_to_delete;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current == NULL || current->next == NULL)
			return (-1);
		current = current->next;
	}

	node_to_delete = current->next;

	if (node_to_delete == NULL)
		return (-1);

	current->next = node_to_delete->next;
	if (current->next != NULL)
		current->next->prev = current;
	free(node_to_delete);

	return (1);
}
