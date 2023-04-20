#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int n = strlen(format), i = 0;
	char *separator = ", ";

	if (!format)
		return;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if ((i == n - 1) && (n > 0))
			separator = "";

		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), separator);
				break;

			case 'i':
				printf("%d%s", va_arg(args, int), separator);
				break;

			case 'f':
				printf("%f%s", va_arg(args, double), separator);
				break;

			case 's':
				printf("%s%s", va_arg(args, char *), separator);
				break;

			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

