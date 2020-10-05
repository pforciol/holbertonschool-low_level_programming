#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to look inside
 * @c: the character to find
 *
 * Return: a pointer to the first occurence of c in s, or NULL if not found
 */

char	*_strchr(char *s, char c)
{
	unsigned int	i = 0;

	while (s[i] != c && s[i])
		i++;
	return (s[i] ? s + i : NULL);
}

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: sting to search inside
 * @accept: chars to be accepted
 *
 * Return: pointer to the byte in s that matches one of the bytes or NULL
 */

char	*_strpbrk(char *s, char *accept)
{
	unsigned int	i = 0;

	while (s[i])
	{
		if (_strchr(accept, s[i]))
			break;
		i++;
	}
	return (s[i] ? s + i : NULL);
}
