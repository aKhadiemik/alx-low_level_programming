#include "lists.h"

/**
 * add_nodeint_end - adds node end of list
 * @head: pointer to head of list
 * @n: integer
 *
 * Return: address of new added element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end = *head;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);

	if (end)
	{
		while (end->next)
			end = end->next;
		end->next = new;
	}
	else
		*head = new;
	return (new);
}
