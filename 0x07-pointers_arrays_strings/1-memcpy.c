/**
 * _memcpy -  copies memory area
 * @dest: destination
 * @src: source memory to copy
 * @n: the first number of the memory
 * Return: a pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
