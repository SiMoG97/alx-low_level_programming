#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @n: an intiger
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h = *head;
	listint_t *curr = malloc(sizeof(listint_t));

	if (!curr)
		return (NULL);

	curr->n = n;
	curr->next = NULL;

	if (*head == NULL)
	{
		*head = curr;
		return (curr);
	}

	while (h->next)
		h = h->next;

	h->next = curr;

	return (curr);
}
