#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: argv
 * Return: NULL or a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0, cursor = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}

	str = malloc(len + ac + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[cursor] = av[i][j];
			cursor++;
		}
		str[cursor] = '\n';
		cursor++;
	}

	return (str);
}
