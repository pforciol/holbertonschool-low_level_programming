/**
 * _islower - checks for lowercase characters
 * @c: character to test (in int)
 *
 * Return: 1 if c is lowercase, 0 if no
 */

int	_islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
