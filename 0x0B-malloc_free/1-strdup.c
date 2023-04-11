#include <stdlib.h>
/**
 * _strdup - Copies a string into a newly allocated memory
 * @str: string to be copied
 * Return: j
 */
char *_strdup(char *str)
{
	char *cpStr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	/* Calculated the length of str */
	for (i = 0; str[i] != '\0'; i++)
		continue;

	cpStr = malloc(sizeof(char) * (i - 0));

	if (cpStr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		cpStr[i] = str[i];
	}
	return (cpStr);
}
