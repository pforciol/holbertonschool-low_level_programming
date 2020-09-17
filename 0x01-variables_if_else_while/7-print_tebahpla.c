#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the reverse alphabet with only 2 putchar
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
