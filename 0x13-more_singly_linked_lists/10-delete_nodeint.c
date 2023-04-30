#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: a pointer to a pointer to the head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	curr = *head;

	for (i = 0; curr != NULL && i < index - 1; i++)
		curr = curr->next;

	if (curr == NULL || curr->next == NULL)
		return (-1);

	tmp = curr->next;
	curr->next = tmp->next;
	free(tmp);

	return (1);
}
