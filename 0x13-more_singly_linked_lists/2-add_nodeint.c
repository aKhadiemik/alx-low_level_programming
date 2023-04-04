#include "lists.h"

/**
 * add_nodeint - adds node to beginning of list
 * @head: pointer to head of list
 * @n: integer
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	else
		return (NULL);
}
