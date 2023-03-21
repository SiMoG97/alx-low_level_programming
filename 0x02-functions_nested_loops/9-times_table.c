#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: nothing
 */

void times_table(void)
{
	int nbr1, nbr2, result, l_num, r_num;

	for (nbr1 = 0; nbr1 <= 9; nbr1++)
	{
		for (nbr2 = 0; nbr2 <= 9; nbr2++)
		{
			if (nbr2 != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			result = nbr1 * nbr2;
			r_num = result % 10;
			l_num = result / 10;

			if (l_num == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(l_num + '0');
			}
			_putchar(r_num + '0');
		}
		_putchar('\n');
	}
}
