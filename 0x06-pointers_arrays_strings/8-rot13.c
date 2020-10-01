/**
 * rot13 - encodes a string into rot13
 * @s: the string to be encoded
 *
 * Return: a pointer to the string
 */

char	*rot13(char *s)
{
	char	alphabet[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	nycunorg[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int		i = 0, j;

	while (s[i])
	{
		j = 0;
		while (alphabet[j] != s[i])
			j++;
		if (j <= 51)
			s[i] = nycunorg[j];
		i++;
	}
	return (s);
}
