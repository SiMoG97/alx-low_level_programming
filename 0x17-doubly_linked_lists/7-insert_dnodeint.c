#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: a pointer to a pointer of the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *ptr = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (ptr == NULL && idx != 0)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	for (i = 0; i < idx - 1; i++)
	{
		if (!ptr)
		{
			free(newNode);
			return (NULL);
		}
		ptr = ptr->next;
	}
	if (!ptr->next)
	{
		newNode->prev = ptr;
		ptr->next = newNode;
	}
	else
	{
		newNode->prev = ptr;
		newNode->next = ptr->next;
		ptr->next->prev = newNode;
		ptr->next = newNode;
	}
	return (newNode);
}
