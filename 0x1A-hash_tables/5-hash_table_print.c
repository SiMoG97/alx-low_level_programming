#include "hash_tables.h"
#include <stdbool.h>

/**
 * hash_table_print -  prints a hash table
 * @ht: the hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i;
	bool foundFirst = false;

	if (!ht || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (foundFirst)
				printf(", ");

			printf("'%s': '%s'", curr->key, curr->value);
			foundFirst = true;
			curr = curr->next;
		}
	}
	printf("}\n");
}
