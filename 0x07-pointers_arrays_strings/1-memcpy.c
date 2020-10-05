/**
 * _memcpy - copies n bytes from the memory area src to memory area dest
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: size of bytes to be copied
 *
 * Return: a pointer to the dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
