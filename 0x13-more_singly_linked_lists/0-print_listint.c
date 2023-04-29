#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the list
 * Return: the nmber of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	const listint_t *ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		len++;
	}
	return (len);
}
