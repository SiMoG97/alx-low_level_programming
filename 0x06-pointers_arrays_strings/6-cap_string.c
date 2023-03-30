/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: pointer to capitalized string
 */

char *cap_string(char *str)
{
	int i, j, sepLen;
	char sep[13] = {' ', '\n', ',', ';', '.', '!', '"', '?', '(', ')'};

	sep[10] = '\t';
	sep[11] = '}';
	sep[12] = '{';
	sepLen = sizeof(sep) / sizeof(sep[0]);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < sepLen; j++)
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				break;
			}
		}
	}
	return (str);
}
