#include "hash_tables.h"

/**
 * hash_table_get - Retrieves value from hash table based on key
 * @ht: The hash table.
 * @key: The key string.
 *
 * Return: The value associated with the key, NULL if key non-existent
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
