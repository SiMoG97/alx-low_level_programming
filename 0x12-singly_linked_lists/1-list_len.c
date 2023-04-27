#include "lists.h"

/**
 * list_len -a function that returns the number of elements in a linked list
 * @h: a pointer to the linked list
 * Return: the lenght of a linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}

