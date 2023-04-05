#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: beginning of list
 *
 * Return: head node, if list empty - 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
