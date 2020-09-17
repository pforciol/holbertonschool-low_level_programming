#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints numbers from 0 to 9
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
		putchar(n++ + '0');
	putchar('\n');
	return (0);
}
