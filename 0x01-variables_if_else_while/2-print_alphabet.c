#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet with only 2 putchar
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');
	return (0);
}
