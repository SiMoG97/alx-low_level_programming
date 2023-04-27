#include "lists.h"

/**
 * add_node -  a function that adds a new node at the beginning of a list_t
 * @head: a pointer to a pointer to a head of a list
 * @str: a string
 * Return: the address of the new element or NULL
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *curr;


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

	curr->next = *head;

	*head = curr;

	return (curr);
}
