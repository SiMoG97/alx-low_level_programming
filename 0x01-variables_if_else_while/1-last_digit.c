#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	l_num = n % 10;

	if (l_num == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_num);
	}
	else if (l_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_num);
	}
	else if (l_num < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_num);
	}

	return (0);
}
