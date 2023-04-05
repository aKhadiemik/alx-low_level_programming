#include "lists.h"

/**
 * delete_nodeint_at_index - deletes selected node
 * @head: beginning of list
 * @index: index
 *
 * Return: upon success - 1, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *swap;
	unsigned int i;

	if (head == NULL)
	return (-1);

	if (index == 0)
	{
		swap = *head
		*head = (*head)->next;
		free(swap);
		return (1);
	}

	swap = *head
	for (i = 0; i < (index - 1); i++)
	{
		if (swap->next == NULL)
			return (-1);

		swap = swap->next;
	}

	tmp = swap->next;
	swap->next = tmp->next;
	free(tmp);
	return (1);
}

