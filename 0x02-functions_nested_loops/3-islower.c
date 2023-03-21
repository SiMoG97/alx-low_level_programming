/**
 * _islower - Entry point
 * @c: first arg
 * Return: either 0 or 1 (Success)
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
