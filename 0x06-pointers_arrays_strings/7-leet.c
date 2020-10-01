/**
 * leet - encodes a string into 1337
 * @s: the string
 *
 * Return: a pointer to the string
 */

char	*leet(char *s)
{
	int		i = 0, j;
	char	letters[11] = "aeotlAEOTL";
	char	numbers[6] = "43071";

	while (s[i])
	{
		j = 0;
		while (letters[j] != s[i])
			j++;
		if (j <= 10)
			s[i] = numbers[j % 5];
		i++;
	}
	return (s);
}
