#include "lists.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
