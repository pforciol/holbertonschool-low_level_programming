#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
		putchar(c++);
	c = 'A';
	while (c <= 'Z')
		putchar(c++);
	putchar('\n');
	return (0);
}
