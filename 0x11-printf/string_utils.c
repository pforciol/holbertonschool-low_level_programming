#include "holberton.h"

/**
 * _strlen - returns the length of the string str
 *
 * @str: The string to measure length
 *
 * Return: the length of the str string
 */

int	_strlen(char *str)
{
	int len = 0;

	if (str)
		while (str[len])
			len++;
	return (len);
}

/**
 * _strnchr - locates a character in a string
 *
 * @s: the string to look inside
 * @c: the character to find
 * @n: the max length to look for
 *
 * Return: the index of the first occurence of c in s, or -1 if not found
 */

int _strnchr(char *s, char c, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] && i <= n)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	if (s[i] == c)
		return (i);
	return (-1);
}

/**
 * rev_string - reverses a string
 *
 * @str: the string to be reversed
 */

void rev_string(char *str)
{
	int i, j = 0, len = (_strlen(str) - 1);
	char tmp;

	for (i = len; i > j; i--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
	}
}

/**
 * _strdup - allocates a new space in memory which contains
 * a copy of the string given as a parameter
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the new string, or NULL if str = NULL or fail
 */

char *_strdup(char *str)
{
	char *new_str;
	int i = 0;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(char) * _strlen(str) + 1);
	if (!new_str)
		return (NULL);
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/**
 * _strcpy - copies the string pointed to by src to the buffer pointed
 * to by dest and returns the value pointed to by dest
 *
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
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
