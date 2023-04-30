#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to a pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: data
 * Return: the address of the new node or null if it failed 
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *currNode = *head;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (!currNode)
		{
			free(newNode);
			return (NULL);
		}
		currNode = currNode->next;
	}

	newNode->next= currNode->next;
	currNode->next = newNode;

	return (newNode);
}
