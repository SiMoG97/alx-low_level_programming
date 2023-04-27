#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the end of a list_t list
 * @head: a pointer to a pointer to a head of a list
 * @str: a string
 * Return: the address of the new element or NULL
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	if (!head)
		return (NULL);

	ptr = *head;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->next = NULL;
	temp->str = strdup(str);
	temp->len = strlen(str);

	if (!ptr)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
	}

	return (temp);
}
