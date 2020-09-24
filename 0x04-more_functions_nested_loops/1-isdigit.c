/**
 * _isdigit - checks for digits
 * @c: character to test (in int)
 *
 * Return: 1 if c is a digit, 0 if no
 */

int	_isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
