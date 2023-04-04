/**
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: a substring to be found
 * Return: a pointer to string or null
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, needleLen;

	for (needleLen = 0; needle[needleLen] != '\0'; needleLen++)
		continue;

	while (*haystack != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] != *(haystack + i))
			{
				break;
			}
		}
		if (needleLen == i)
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
