#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: either 0 or 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%ld\n", strtol(argv[1], NULL, 10) * strtol(argv[2], NULL, 10));
	return (0);
}
