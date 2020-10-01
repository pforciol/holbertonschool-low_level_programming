/**
 * issep - check is c is a separator
 * @c: the character
 *
 * Return: 1 if yes, 0 if no
 */

int		issep(char c)
{
	int i = 0;
	char seps[14] = " \t\n,;.!?\"(){}";

	while (c != seps[i])
		i++;
	return ((i <= 12));
}

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 *
 * Return: a pointer to the string
 */

char	*cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 || issep(s[i - 1]))
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
