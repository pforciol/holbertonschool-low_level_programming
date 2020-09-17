#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the numbers of base 16
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int h = '0';

	while (h <= 'f')
	{
		if (h <= '9' || h >= 'a')
			putchar(h);
		h++;
	}
	putchar('\n');
	return (0);
}
