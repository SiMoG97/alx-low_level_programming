#include "hash_tables.h"

/**
 * hash_table_print -  prints a hash table
 * @ht: the hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	unsigned long int i, count = 0, arrLen = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			arrLen++;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (count != 0)
				printf(" ");

			printf("'%s': '%s'", curr->key, curr->value);
			count++;
			if (curr->next || count != arrLen)
				printf(",");

			curr = curr->next;
		}
	}
	printf("}\n");
}
