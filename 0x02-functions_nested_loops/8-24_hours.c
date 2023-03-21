#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int lh, rh, lm, rm;

	for (lh = 0; lh <= 2; lh++)
	{
		for (rh = 0; rh < 10; rh++)
		{
			if (lh == 2 && rh == 4)
			{
				break;
			}
			for (lm = 0; lm < 6; lm++)
			{
				for (rm = 0; rm < 10; rm++)
				{
					_putchar(lh + '0');
					_putchar(rh + '0');
					_putchar(':');
					_putchar(lm + '0');
					_putchar(rm + '0');
					_putchar('\n');
				}
			}
		}
	}
}
