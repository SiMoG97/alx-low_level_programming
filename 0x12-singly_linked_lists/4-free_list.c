#include "lists.h"
/**
 * free_list- Entry point
 * @head: a pointer to the head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
