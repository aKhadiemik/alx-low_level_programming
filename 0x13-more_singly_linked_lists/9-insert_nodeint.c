#include "lists.h"

/**
 * insert_nodeint_at_index - adds node to list
 * @head: beginning of list
 * @idx: index
 * @n: integer
 *
 * Return: added node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
	if (temp == NULL)
		return (NULL);

	temp = temp->next;
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}
