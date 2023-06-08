#include "hash_tables.h"

/**
 * key_index - Returns index of key in hash table array.
 * @key: key string.
 * @size: size of hash table array.
 *
 * Return: index at which key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}

