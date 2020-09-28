#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed
 * to by dest and returns the value pointed to by dest
 *
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: pointer to dest
 */

char	*_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
