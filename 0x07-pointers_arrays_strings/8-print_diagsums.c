#include <stdio.h>
/**
 * print_diagsums - print sum of the two diagonals of a square matrix of int
 * @a : a matrinx
 * @size: size of the matrix
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - i - 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
