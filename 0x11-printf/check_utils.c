#include "holberton.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: character to test (in int)
 *
 * Return: 1 if c is alphabetic, 0 if no
 */

int	_isalpha(int c)
{
	return (((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) ? 1 : 0);
}

/**
 * _islower - checks for lowercase characters
 *
 * @c: character to test (in int)
 *
 * Return: 1 if c is lowercase, 0 if no
 */

int _islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}

/**
 * _isdigit - checks for digits
 *
 * @c: character to test (in int)
 *
 * Return: 1 if c is a digit, 0 if no
 */

int _isdigit(int c)
{
	return ((c >= '0' && c <= '9') ? 1 : 0);
}
