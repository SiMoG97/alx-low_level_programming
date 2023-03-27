/**
 * swap_int - Entry point
 * @a: num 1
 * @b: num 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
