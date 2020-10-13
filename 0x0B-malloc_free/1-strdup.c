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
