#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the table
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
