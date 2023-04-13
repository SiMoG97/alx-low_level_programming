#include <stdlib.h>
#include <string.h>
/**
 * _calloc - simillar to calloc
 * @nmemb: number of elements
 * @size: size of element
 * Return: a pointer to the allocated memory.or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	memset(arr, 0, nmemb * size);

	return (arr);
}

