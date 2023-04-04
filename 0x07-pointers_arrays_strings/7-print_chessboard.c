#include "main.h"
/**
 * print_chessboard - prints a chess board
 * @a: array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int c, r;

	for (c = 0; c < 8; c++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[c][r]);
		}
		_putchar('\n');
	}
}
