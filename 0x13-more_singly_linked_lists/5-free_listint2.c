#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head || *head == NULL)
		return;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
