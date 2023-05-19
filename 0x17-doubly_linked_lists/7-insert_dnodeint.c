#include "lists.h"

/**
 * create_node - creates new node on linked list
 *
 * @n: node data
 *
 * Return: new node
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - insert node at specified index of linked list
 *
 * @h: head of linked list
 * @idx: specified index
 * @n: node data
 *
 * Return: address of new node if success, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = create_node(n), *current = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	if (current == NULL)
		return (free(new_node), NULL);

	new_node->next = current->next;
	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
