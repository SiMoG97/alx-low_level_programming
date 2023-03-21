#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int numToPrint,  prevNum, currNum;

	prevNum = 0;
	numToPrint = 1;

	for (i = 0; i < 50; i++)
	{
		currNum = numToPrint;
		numToPrint = prevNum + currNum;
		prevNum = currNum;

		if (i == 49)
		{

			printf("%ld\n", numToPrint);
		}
		else
		{
			printf("%ld, ", numToPrint);
		}
	}
	return (0);
}

