/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: the string
 *
 * Return: a pointer to the string
 */

char	*string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && i <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
