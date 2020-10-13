#include "holberton.h"

/**
 * wordlen - calculates the length of a word until space or end of line
 *
 * @word: the word first index
 *
 * Return: the length of the word at the given index
 */

int		wordlen(char *word)
{
	int i = 0;

	if (word != NULL)
		while (word[i] != ' ' && word[i])
			i++;
	return (i);
}

/**
 * count_words - count the number of words separated by spaces
 *
 * @str: the string containing words
 *
 * Return: the amount of words in the string
 */

int		count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] == ' ')
		{
			i++;
		}
		else
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
	}
	return (count);
}

/**
 * exit_free - frees the 2D word arrays in case of a malloc error
 *
 * @words: the 2D array of words
 * @nb: the number of words to free
 */

void	exit_free(char **words, int nb)
{
	int i = 0;

	while (i < nb)
		free(words[i++]);
	free(words);
}

/**
 * strtow - splits a string into words
 *
 * @str: the string to separate
 *
 * Return: a pointer to an array of words, or NULL if str == NULL or fail
 */

char	**strtow(char *str)
{
	char	**words;
	int		count, k;
	int		i = 0, j = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	count = count_words(str);
	words = malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
		{
			words[j] = malloc(sizeof(char) * (wordlen(str + i) + 1));
			if (!words[j])
			{
				exit_free(words, j);
				return (NULL);
			}
			k = 0;
			while (str[i] && str[i] != ' ')
				words[j][k++] = str[i++];
			words[j][k] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
