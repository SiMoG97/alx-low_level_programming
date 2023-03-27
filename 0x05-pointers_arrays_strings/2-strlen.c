/**
 * _strlen - Calculates the length of a string
 * @s: string
 * Return: a number
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
