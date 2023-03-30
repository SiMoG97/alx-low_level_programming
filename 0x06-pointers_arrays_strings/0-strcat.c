/**
 * _strcat - Concatinates two strings
 * @dest: string1
 * @src: string2
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, destLen, srcLen;

	for (destLen = 0; dest[destLen] != '\0'; destLen++)
	{
	}
	for (srcLen = 0; src[srcLen] != '\0'; srcLen++)
	{
	}

	for (i = 0; i < srcLen; i++)
	{
		dest[destLen + i] = src[i];
	}
	return (dest);
}
