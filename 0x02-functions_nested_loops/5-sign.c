#include "main.h"
/**
 * print_sign - Checks if n is positive or negative or equals 0
 * @n: number to check
 * Return: -1 or 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
