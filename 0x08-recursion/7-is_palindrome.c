/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to measure
 *
 * Return: the length of a string
 */

int		_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_pal_check - checks if the string is a palindrome
 * @s: the string to test
 * @end: the last index value of the string
 * @i: the first index of the string
 *
 * Return: 1 if is pal, 0 if no
 */

int		is_pal_check(char *s, int end, int i)
{
	if (s[end] == s[i] && (i == end - 1 || i == end))
		return (1);
	if (s[end] != s[i])
		return (0);
	return (is_pal_check(s, end - 1, i + 1));
}


/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to test
 *
 * Return: 1 if palindrome, 0 if no
 */

int		is_palindrome(char *s)
{
	int	i = _strlen_recursion(s);

	if (i <= 1)
		return (1);
	return (is_pal_check(s, i - 1, 0));
}
