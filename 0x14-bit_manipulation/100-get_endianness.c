#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *)&n;

	if (*p)
		return (1);
	return (0);
}
