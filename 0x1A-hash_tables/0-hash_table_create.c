#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of array.
 *
 * Return: Pointer to created hash table, if error - NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return ((void *)0);

	ht = malloc(sizeof(hash_table_t));
	if (ht == (void *)0)
		return ((void *)0);

	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == (void *)0)
	{
		free(ht);
		return ((void *)0);
	}

	ht->size = size;

	return (ht);
}
