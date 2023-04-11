#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: initializing character
 * Return: a pointer to the arrray or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
