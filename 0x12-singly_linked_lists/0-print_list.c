#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr = h;

	ptr = h;
	while (ptr != NULL)
	{
		n++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;
	}
	return (n);
}
