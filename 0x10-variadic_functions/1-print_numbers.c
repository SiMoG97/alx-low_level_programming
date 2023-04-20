#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of args
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;


	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));

		if ((separator != NULL) && (i < n - 1))
			printf("%s", separator);
	}

	va_end(nums);
	printf("\n");
}
