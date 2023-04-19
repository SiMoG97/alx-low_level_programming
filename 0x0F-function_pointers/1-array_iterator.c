#include <stddef.h>
/**
 * array_iterator - exec a function given as an arg on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: a pointer to the function you need to use
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
