/**
 * _memset - fills memory with a constant byte
 * @s: pointer to s
 * @b: constant bytes
 * @n: the first number of the memory
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
