#include "main.h"
/**
 * print_times_table - prints times table
 * @n: number of times table
 * Return: nothing
 */
void print_times_table(int n)
{
	int nbr1, nbr2, result;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (nbr1 = 0; nbr1 <= n; nbr1++)
	{
		_putchar(0 + '0');
		for (nbr2 = 1; nbr2 <= n; nbr2++)
		{
			_putchar(',');
			result = nbr1 * nbr2;
			_putchar(' ');
			if (result / 100 == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(result / 100 + '0');
			}
			if (result / 100 == 0 && ((result % 100) / 10 == 0))
			{
				_putchar(' ');
			}
			else
			{
				_putchar((result % 100) / 10 + '0');
			}
			_putchar(result % 10 + '0');
		}
		_putchar('\n');
	}
}
