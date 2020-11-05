#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at given index
 *
 * @n: the number you want to set value to 0
 * @index: the index of the bit that you want
 *
 * Return: 1 or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index <= 63)
	{
		*n = (*n & ~(1 << index));

		return (1);
	}
	return (-1);
}
