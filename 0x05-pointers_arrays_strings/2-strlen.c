/**
 * _strlen - returns the length of the string
 * @s: the string
 *
 * Return: the length of the s string
 */

int	_strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
