#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the list
 * @index: the index of the node
 * Return: node of listint_t or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (index != i)
		{
			i++;
			head = head->next;
			continue;
		}
		return (head);
	}
	return (NULL);
}
