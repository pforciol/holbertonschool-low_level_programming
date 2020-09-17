#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints numbers from 0 to 9 separated by ","
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0'); /* To get the ASCII value of the number */
		if (n++ < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
