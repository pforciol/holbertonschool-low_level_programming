#include "holberton.h"

/**
 * _puts - writes the string str to stdout
 *
 * @str: The string to print
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
		_putchar(str[i++]);
}

/**
 * _strcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the new string, or NULL on failure
 */

char *_strcat(char *s1, char *s2)
{
	char *str;
	int i = 0, j = 0;

	str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (!str)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			str[i + j] = s2[j];
			j++;
		}
	}
	str[i + j] = '\0';
	return (str);
}

/**
 * _strncpy - copies the string pointed to by src to the buffer pointed
 * to by dest and returns the value pointed to by dest
 *
 * @dest: destination buffer
 * @src: source buffer
 * @size: maximum size to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int size)
{
	int i = 0;

	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcmp - compares 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: diff between first two different chars
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

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
	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}
