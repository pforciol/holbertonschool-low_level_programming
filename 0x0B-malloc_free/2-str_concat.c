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
 * _strdup - allocates a new space in memory which contains
 * a copy of the string given as a parameter
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the new string, or NULL if str = NULL or fail
 */

char	*_strdup(char *str)
{
	char	*new_str;
	int		i = 0;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * _strlen(str));
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the new string, or NULL on failure
 */

char	*str_concat(char *s1, char *s2)
{
	char	*str;
	int		i = 0, j = 0;

	if (s1 == NULL && s2 != NULL)
		return (_strdup(s2));
	if (s2 == NULL && s1 != NULL)
		return (_strdup(s1));
	str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (!str)
		return (NULL);
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			str[i + j] = s2[j];
			j++;
		}
	}
	str[i + j] = '\0';
	return (str);
}
