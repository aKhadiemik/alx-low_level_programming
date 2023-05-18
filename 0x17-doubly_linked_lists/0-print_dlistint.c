#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 *
 *
 * @dlistint_t: doubly linked list
 *
 * Return: no. of elements in a doubly linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *current = h;

    while (current != NULL) {
        printf("%d\n", current->n);
        count++;
        current = current->next;
    }

    return count;
}
