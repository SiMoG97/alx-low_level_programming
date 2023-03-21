#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int numToPrint,  prevNum, currNum, sum;

	prevNum = 0;
	numToPrint = 1;
	sum = 0;
	while (numToPrint <= 4000000)
	{
		currNum = numToPrint;
		numToPrint = prevNum + currNum;
		prevNum = currNum;

		if (numToPrint % 2 == 0)
		{
			sum += numToPrint;
		}
	}
	printf("%ld\n", sum);
	return (0);
}

