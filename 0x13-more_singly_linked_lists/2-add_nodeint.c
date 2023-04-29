#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: a pointer to a pointer to the head of the list
 * @n: an intiger
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *curr = malloc(sizeof(listint_t));

	if (!curr)
		return (NULL);

	curr->n = n;
	curr->next = *head;
	*head = curr;

	return (curr);
}
