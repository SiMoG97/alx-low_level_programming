#include "hash_tables.h"

void free_list(hash_node_t *head);

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i])
			free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
 * free_list- Entry point
 * @head: a pointer to the head of the list
 * Return: Nothing
 */

void free_list(hash_node_t *head)
{
	hash_node_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->key);
		free(tmp->value);
		free(tmp);
	}
}
