/**
 *_strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: pointer to the occurrence of the character or NULL
 */

char *_strchr(char *s, char c)
{
	for ( ; *s != '\0'; )
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
