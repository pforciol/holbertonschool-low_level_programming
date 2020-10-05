/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 *
 * @s: memory area pointer
 * @b: char to be filled with
 * @n: size of bytes to be filled
 *
 * Return: a pointer to the memory area
 */

char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int	i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
