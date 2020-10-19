#include "dog.h"

/**
 * _strlen - returns the length of a string
 *
 * @str: the string to length
 *
 * Return: the length of a string
 */

int		_strlen(char *str)
{
	int	i = 0;

	while (str[i])
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
 * new_dog - creates a new dog
 *
 * @name: the name of the new dog
 * @age: the age of the new dog
 * @owner: the owner of the new dog
 *
 * Return: the newly created dog
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = _strdup(name);
	if (!new->name)
	{
		free(new);
		return (NULL);
	}

	new->owner = _strdup(owner);
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	new->age = age;
	return (new);
}
