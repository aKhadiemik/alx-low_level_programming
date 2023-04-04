#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer to the head of the list
 * @n: number to be used as content
 *
 * Return: address of the newly added node
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
