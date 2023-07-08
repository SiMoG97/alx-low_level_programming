#include "hash_tables.h"

/**
 * create_node - creates a new hash_node_t node
 * @key: the key
 * @value: the value
 * Return: the new created node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newNode = malloc(sizeof(hash_node_t));

	if (!newNode)
		return (NULL);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;

	return (newNode);
}

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table to add value to it
 * @key: the key
 * @value: the value associated withthe key
 *
 * Return: Always 0 (Success)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *curr, *newNode, **head;
	char *newValue;

	if (!key || !(*key) || !value || !ht)
		return (0);

	head = &(ht->array[index]);
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			newValue = strdup(value);
			if (!newValue)
				return (0);
			curr->value = newValue;
			return (1);
		}
		curr = curr->next;
	}

	newNode = create_node(key, value);
	if (newNode == NULL)
		return (0);

	if (*head == NULL)
	{
		*head = newNode;
		return (1);
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
