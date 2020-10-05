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

	while (s[i] != c && s[i++])
		;
	return (s[i] ? s + i : NULL);
}
