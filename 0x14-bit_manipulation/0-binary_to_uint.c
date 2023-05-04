#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: binary number
 * Return:  the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0, bitPos = 0, len = 0;

	if (!b)
		return (0);

	len = strlen(b);
	while (len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);

		if (b[len] == '1')
			value += 1 << bitPos;

		bitPos++;
	}
	return (value);
}
