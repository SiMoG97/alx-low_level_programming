#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer or null
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = (char *)malloc(len1 + len2 + 1);

	if (concat == NULL)
		return (NULL);


	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);

}
