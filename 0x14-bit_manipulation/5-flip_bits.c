#include "main.h"
/**
 * flip_bits - Returns the number of bits you would need to flip to get from
 * one number to another
 * @n: The first number
 * @m: The second number
 * Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = 0;
	unsigned long int d = n ^ m;

	while (d > 0)
	{
		c += d & 1;
		d >>= 1;
	}

	return (c);
}
