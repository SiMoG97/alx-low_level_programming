#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr = *head;
	listint_t *prev = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		return (1);
	}

	while (index != 0)
	{
		prev = curr;
		curr = curr->next;
		index--;
	}

	prev->next = curr->next;
	free(curr);
	curr = NULL;

	return (1);
}
