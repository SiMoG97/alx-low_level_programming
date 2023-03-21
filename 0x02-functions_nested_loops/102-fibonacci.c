#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int numToPrint,  prevNum, currNum, i;

	prevNum = 0;
	numToPrint = 1;

	for (i = 0; i < 50; i++)
	{
		currNum = numToPrint;
		numToPrint = prevNum + currNum;
		prevNum = currNum;

		printf("%ld, ", numToPrint);
	}
	putchar('\n');
	return (0);
}

