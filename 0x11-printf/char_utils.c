#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _charcat - concatenates a char to a string
 *
 * @str: the first string
 * @c: the char
 *
 * Return: a pointer to the new string, or NULL on failure
 */

char *_charcat(char *str, char c)
{
	char *cat;
	int i = 0;

	cat = malloc(sizeof(char) * (_strlen(str) + 2));
	if (!cat)
		return (NULL);
	if (str != NULL)
		while (str[i])
		{
			cat[i] = str[i];
			i++;
		}
	if (c)
		cat[i] = c;
	i++;
	cat[i] = '\0';
	free(str);
	return (cat);
}
