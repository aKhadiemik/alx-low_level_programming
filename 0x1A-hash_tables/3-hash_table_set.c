#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key string.
 * @value: The value string.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *temp_node;
    unsigned long int index;

    /* Check for NULL parameters or empty key */
    if (ht == NULL || key == NULL || *key == '\0')
        return 0;

    /* Calculate the index for the key */
    index = key_index((unsigned char *)key, ht->size);

    /* Check if key already exists, update its value */
    temp_node = ht->array[index];
    while (temp_node != NULL)
    {
        if (strcmp(temp_node->key, key) == 0)
        {
            free(temp_node->value);
            temp_node->value = strdup(value);
            return 1;
        }
        temp_node = temp_node->next;
    }

    /* Key doesn't exist, create a new node and add it to the beginning of the list */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0;

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}

