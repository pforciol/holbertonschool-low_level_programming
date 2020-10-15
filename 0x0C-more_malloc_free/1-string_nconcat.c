#include "holberton.h"

/**
 * _strlen - returns the length of the string
 * @s: the string
 *
 * Return: the length of the s string
 */

int		_strlen(char *s)
{
	int i = 0;

	if (s != NULL)
		while (s[i])
			i++;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum size in bytes of s2 to be concatenated to s1
 *
 * Return: a pointer to the new string, or NULL on failure
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	char			*str;
	unsigned int	i = 0, j = 0;

	if (n >= (unsigned int)_strlen(s2))
		n = (unsigned int)_strlen(s2);
	str = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (!str)
		return (NULL);
	if (s1 != NULL)
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	if (s2 != NULL)
		while (s2[j] && j < n)
		{
			str[i + j] = s2[j];
			j++;
		}
	str[i + j] = '\0';
	return (str);
}
