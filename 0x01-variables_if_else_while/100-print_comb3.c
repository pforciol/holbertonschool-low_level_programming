#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints numbers from 00 to 99 with two different digits, no
 * same combinations (like 01 and 10), and in ascending order.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n1 = 0, n2;

	while (n1 < 9)
	{
		n2 = n1 + 1;
		while (n2 <= 9)
		{
			putchar(n1 + '0'); /* To get the ASCII value of the number */
			putchar(n2 + '0');
			if (n1 < 8 || n2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
			n2++;
		}
		n1++;
	}

	putchar('\n');
	return (0);
}
