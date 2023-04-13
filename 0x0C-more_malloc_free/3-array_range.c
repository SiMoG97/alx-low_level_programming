#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number of integers in the array
 * @max: maximum number of integers in the array
 * Return: pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[i - min] = i;

	return (arr);
}

