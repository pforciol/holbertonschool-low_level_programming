#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string
 * @accept: bytes to accept in s
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (s[i])
		if (_strchr(accept, s[i]) != NULL)
			i++;
		else
			break;
	return (i);
}
