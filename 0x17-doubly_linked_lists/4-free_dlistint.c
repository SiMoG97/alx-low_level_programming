#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the dlistint_t
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
