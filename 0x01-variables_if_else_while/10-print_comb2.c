#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints numbers from 00 to 99 separated by ","
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int n1, n2;

	while (i < 100)
	{
		n1 = i / 10; /* To catch the first digit */
		n2 = i % 10; /* To catch the second digit */
		putchar(n1 + '0'); /* To get the ASCII value of the number */
		putchar(n2 + '0');

		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
