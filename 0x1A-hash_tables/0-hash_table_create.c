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
	/* unsigned long int i; */

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/**
	 *	for (i = 0; i < size; i++)
	 *		ht->array[i] = NULL;
	 */

	ht->size = size;

	return (ht);
}
