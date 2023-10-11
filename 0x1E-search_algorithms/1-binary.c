#include "search_algos.h"
/**
 * print_array - prints and array fron a given index to a given index
 * @array: array to print
 * @start_idx: starting index to print
 * @end_idx: ending index to print
 * Return: Nothing
 */

void print_array(int *array, size_t start_idx, size_t end_idx)
{
	size_t i;

	if (!array || end_idx < start_idx)
		return;

	printf("Searching in array: ");
	for (i = start_idx; i <= end_idx; i++)
	{
		printf("%d", array[i]);
		if (i != end_idx)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_rec - prints and array fron a given index to a given index
 * @array: the array to search in
 * @value: the value to look for
 * @start_idx: the start index of the new array
 * @end_idx: the index of the new array
 * Return: the index where value is located or -1 if not found
 */

int binary_search_rec(int *array, int value, size_t start_idx, size_t end_idx)
{
	size_t midArr;

	if (start_idx > end_idx)
		return (-1);

	print_array(array, start_idx, end_idx);

	midArr = (start_idx + end_idx) / 2;

	if (array[midArr] == value)
		return (midArr);
	else if (value > array[midArr])
		return (binary_search_rec(array, value, midArr + 1, end_idx));
	else if (value < array[midArr])
		return (binary_search_rec(array, value, start_idx, midArr - 1));

	return (-1);
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
 * or -1 if array is null or value is not present
 */

int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_search_rec(array, value, 0, size - 1));
}
