#include <stdio.h>

/**
 * print_array - Entry point
 * @a: array to print
 * @n: number of elements to print
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
