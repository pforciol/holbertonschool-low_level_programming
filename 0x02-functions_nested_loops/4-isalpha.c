/**
 * _isalpha - checks for alphabetic characters
 * @c: character to test (in int)
 *
 * Return: 1 if c is alphabetic, 0 if no
 */

int	_isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}
