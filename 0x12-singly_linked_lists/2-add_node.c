#include "lists.h"

/**
 * add_node - adds new node at start of list
 * @head: beginning of linked list
 * @str: string
 *
 * Return: address of list head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t n;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	node->len = n;
	node->next = *head;
	*head = node;

	return (*head);
}
