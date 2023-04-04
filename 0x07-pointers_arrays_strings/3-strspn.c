/**
 *_strspn - gets the length of a prefix substring
 * @s: string
 * @accept: prefix substring
 * Return: a number
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (count == i)
		{
			break;
		}
	}
	return (count);
}
