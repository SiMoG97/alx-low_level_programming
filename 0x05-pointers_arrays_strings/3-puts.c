#include "main.h"
/**
 * _puts - Prints a given strin to stdout
 * @str: the given string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
