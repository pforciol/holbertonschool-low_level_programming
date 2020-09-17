#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the alphabet with only 2 putchar and without q and e
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
