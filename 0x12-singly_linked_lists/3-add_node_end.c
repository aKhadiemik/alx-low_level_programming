#include "lists.h"

/**
 * add_node_end - adds node at end of list
 * @head: head of list
 * @str: string
 *
 * Return: address to head of list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *node_pos;
	size_t n;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	node->len = n;
	node->next = NULL;
	node_pos = *head;

	if (node_pos == NULL)
	{
		*head = node;
	}
	else
	{
		while (node_pos->next != NULL)
			node_pos = node_pos->next;
		node_pos->next = node;
	}
	return (node);
}
