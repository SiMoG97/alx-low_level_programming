#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *concat;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
			continue;
	}
	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
			continue;
	}
	concat = malloc(sizeof(char) * (len1 + 0) * (len2 + 0));

	if (concat == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			concat[i] = s1[i];
		}
	}

	concat[i] = '\0';
	i = 0;
	if (s2 != NULL)
	{
		for (; s2[i] != '\0'; i++)
		{
			concat[len1 + i] = s2[i];
		}
	}
	concat[len1 + i] = '\0';
	return (concat);
}
