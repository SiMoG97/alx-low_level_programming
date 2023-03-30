/**
 * _strncat - Concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes
 * Return: returns a pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dLen, i;

	for (dLen = 0; dest[dLen] != '\0'; dLen++)
	{}

	for (i = 0; i < n; i++)
	{
		dest[dLen + i] = src[i];
	}
	return (dest);
}
