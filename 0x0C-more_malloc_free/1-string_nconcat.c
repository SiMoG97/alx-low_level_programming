#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: Pointer to a newly allocated space or NULL on fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1Len, s2Len;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1Len = strlen(s1);
	s2Len = strlen(s2);

	if (n >= s2Len)
		n = s2Len;

	str = malloc(s1Len + n + 1);

	if (str == NULL)
		return (NULL);

	strcpy(str, s1);
	strncat(str, s2, n);

	return (str);
}

