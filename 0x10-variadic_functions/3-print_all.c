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
	char *separator = "", *string;

	if (!format)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c%s", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%d%s", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%f%s", separator, va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (!string)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}

