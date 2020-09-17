#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Outputs a random n number and tells
 * if it's negative, zero, or positive.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
