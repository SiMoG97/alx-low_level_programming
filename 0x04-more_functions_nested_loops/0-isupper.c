/**
 * _isupper - Entry point
 * @c: first arg
 * Return: either 0 or 1 (Success)
 */
int _isupper(int c)
{
        if (c <= 'Z' && c >= 'A')
        {
                return (1);
        }
        else
        {
                return (0);
        }
}
