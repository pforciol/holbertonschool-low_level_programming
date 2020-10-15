#include "holberton.h"

/*
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

/*
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
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the old size value in bytes of ptr
 * @new_size: the new size value in bytes of ptr
 *
 * Return: a pointer to the newly allocated memory,
 * or NULL if new_size = 0 and ptr != NULL, or on failure
 */

void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char			*copy = NULL;
	char			*new_ptr;
	unsigned int	i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr != NULL)
	{
		copy = _strdup((char *)ptr);
		free(ptr);
	}
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	if (copy != NULL)
	{
		while (i < new_size && copy[i])
		{
			new_ptr[i] = copy[i];
			i++;
		}
		free(copy);
	}
	return ((void *)new_ptr);
}
