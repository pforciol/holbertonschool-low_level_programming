#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints numbers from 00 00 to 99 99
 * with two different digits, no same combinations
 * (like 00 01 and 01 00), and in ascending order.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n1, n2, n3, n4;
	int i = 0, j;

	while (i <= 99)
	{
		j = i + 1;
		n1 = i / 10; /* To catch the first digit */
		n2 = i % 10; /* To catch the second digit */

		while (j <= 99)
		{
			n3 = j / 10;
			n4 = j % 10;

			putchar(n1 + '0'); /* To get the ASCII value of the number */
			putchar(n2 + '0');
			putchar(' ');
			putchar(n3 + '0');
			putchar(n4 + '0');

			if (i <= 97 || j <= 98)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
