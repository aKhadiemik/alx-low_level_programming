#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	_putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\'');
			print_string(node->key);
			_putchar('\'');
			_putchar(':');
			_putchar(' ');
			_putchar('\'');
			print_string(node->value);
			_putchar('\'');
			flag = 1;
			node = node->next;
		}
	}
	_putchar('}');
	_putchar('\n');
}

/**
 * print_string - Prints a string character by character.
 * @str: The string to print.
 */
void print_string(const char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
