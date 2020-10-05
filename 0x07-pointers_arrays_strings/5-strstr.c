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

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;

	}
	if (s + i)
		return (s + i);
	return (NULL);

}

/**
 * _strstr - locates a substring
 *
 * @haystack: the string to search in
 * @needle: the string to find in haystack
 *
 * Return: pointer to the beginning of the beginning of the located substring,
 * or NULL if the substring is not found
 */

char	*_strstr(char *haystack, char *needle)
{
	unsigned int	i = 0, j;
	unsigned int	length = 0;

	while (needle[length])
		length++;

	while (haystack[i])
	{
		j = 0;
		while (_strchr(haystack + i + j, needle[j]) == haystack + i + j)
			j++;
		if (j == length)
			break;
		i++;
	}
	return (haystack[i] ? haystack + i : NULL);
}
