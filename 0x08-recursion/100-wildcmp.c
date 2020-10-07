#include <stdio.h>

/**
 * compare - holds the comparision between the two strings
 * @s1: the first string
 * @s2: the second string that can contain *
 *
 * Return: 1 if the strings are identical, 0 else
 */

int		compare(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (compare(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (compare(s1, s2 + 1) || compare(s1 + 1, s2));
	return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: the first string
 * @s2: the second string that can contain *
 *
 * Return: 1 if the strings are identical, 0 else
 */

int		wildcmp(char *s1, char *s2)
{
	return (compare(s1, s2));
}
