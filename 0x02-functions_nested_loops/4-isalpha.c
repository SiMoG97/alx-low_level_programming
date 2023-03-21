/**
 * _isalpha - This function checks if the provided character is an alphabet
 * @c: character to check
 * Return: either 0 or 1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
