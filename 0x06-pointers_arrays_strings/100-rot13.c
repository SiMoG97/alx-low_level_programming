/**
 * rot13 - a function that encodes a string using rot13.
 * @s: string
 * Return: encoded string pointer
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		for ( ; (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'); )
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] += 13;
				break;
			}
				s[i] -= 13;
				break;
		}
	}
	return (s);
}
