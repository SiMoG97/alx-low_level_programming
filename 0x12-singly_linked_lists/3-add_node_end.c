#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list
 * @head: a pointer to a pointer to a head of a list
 * @str: a string
 * Return: the address of the new element or NULL
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head, *curr;

	curr = malloc(sizeof(list_t));

	if (curr == NULL)
		return (NULL);

	curr->str = strdup(str);
	curr->len = strlen(str);
	curr->next = NULL;

	if (*head == NULL)
	{
		*head = curr;
		return (curr);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = curr;

	return (curr);
}
