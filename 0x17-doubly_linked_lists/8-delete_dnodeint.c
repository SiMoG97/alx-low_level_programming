#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 *
 * @head: a pointer to a pointer of the head of the list
 * @index: the index of the list where the node should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	for (i = 0; i < index && ptr; i++)
		ptr = ptr->next;

	if (!ptr)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		if (ptr->next)
			ptr->next->prev = NULL;
		free(ptr);
		return (1);
	}
	ptr->prev->next = ptr->next;
	if (ptr->next)
		ptr->next->prev = ptr->prev;

	free(ptr);
	return (1);
}
