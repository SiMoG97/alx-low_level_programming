#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to find the index
 * @index: The index to find
 *
 * Return: The value of the bit at index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 63)
		return (-1);

	mask <<= index;
	if (n & mask)
		return (1);
	return (0);
}
