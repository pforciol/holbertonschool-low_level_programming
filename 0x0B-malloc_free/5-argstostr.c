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
 * argstostr - concatenates all the argumebts of the program
 *
 * @ac: number of arguments
 * @av: the arguments
 *
 * Return: a pointer to a new string,
 * or NULL if ac or av = NULL or on fail
 */

char	*argstostr(int ac, char **av)
{
	char	*args;
	int		i = 0, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		len += _strlen(av[i]) + 1;
		i++;
	}
	args = malloc(sizeof(char) * len);
	if (!args)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			args[k++] = av[i][j++];
		args[k++] = '\n';
		i++;
	}
	args[k] = '\0';
	return (args);
}
