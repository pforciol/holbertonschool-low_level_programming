#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to look inside
 * @c: the character to find
 *
 * Return: a pointer to the first occurence of c in s, or NULL if not found
 */

char			*_strchr(char *s, char c)
{
	unsigned int	i = 0;

	while (s[i] != c && s[i])
		i++;
	return (s[i] ? s + i : NULL);
}

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string
 * @accept: bytes to accept in s
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	i = 0;

	while (s[i])
		if (_strchr(accept, s[i]) != NULL)
			i++;
		else
			break;
	return (i);
}
