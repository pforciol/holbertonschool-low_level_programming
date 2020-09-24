/**
 * _isupper - checks for uppercase characters
 * @c: character to test (in int)
 *
 * Return: 1 if c is uppercase, 0 if no
 */

int	_isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
