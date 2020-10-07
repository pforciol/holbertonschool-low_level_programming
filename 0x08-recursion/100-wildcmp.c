#include <stdio.h>

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string that can contain *
 *
 * Return: 1 if the strings are identical, 0 else
 */

int		wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
